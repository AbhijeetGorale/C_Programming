///////////////////////////////////////////////////////////////////////////////////
// 
// Header Files Inclusion
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////
// 
// User Defined Macros
//
///////////////////////////////////////////////////////////////////////////////////

#define MAXINODES 10

#define MAXFILESIZE 50
#define MAXOPENFILES 10

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

#define REGULARFILE 1
#define SPECIALFILE 2 

//////////////////////////////////////////////////////////////////////////////////
// 
// User Defined Macros for error handling
//
///////////////////////////////////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8

///////////////////////////////////////////////////////////////////////////////////
// 
// Structure name : BootBlock
// Discription    : It holds the information to boot the Operating System
//
///////////////////////////////////////////////////////////////////////////////////

struct BootBlock                     
{
    char Information[100];
};

///////////////////////////////////////////////////////////////////////////////////
// 
// Structure name : SuperBlock
// Discription    : it holds the information of complete File System
//
///////////////////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes ;
    int FreeInodes ;
};

///////////////////////////////////////////////////////////////////////////////////
// 
// Structure name : Inode
// Discription    : it holds information of file
//
///////////////////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct Inode
{
    char FileName[20];
    int InodeNumber ;
    int FileSize ;
    int ActualFileSize ;
    int FileType ;
    int ReferenceCount ;               
    int Permission ;
    char *Buffer ;
    struct Inode *next ; 
};

// Ram Block
typedef struct Inode INODE;
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;

///////////////////////////////////////////////////////////////////////////////////
// 
// Structure name : File Table
// Discription    : it holds information of Opened Files
//
///////////////////////////////////////////////////////////////////////////////////
#pragma pack(1)
struct FileTable
{
    int ReadOffset;
    int WriteOffset ; 
    int Mode ; 
    PINODE ptrinode ;

};

typedef struct FileTable FILETABLE;
typedef struct FileTable* PFILETABLE;


///////////////////////////////////////////////////////////////////////////////////
// 
// Structure name : UAREA
// Discription    : it holds the information of  Process
//
///////////////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};


///////////////////////////////////////////////////////////////////////////////////
// 
// Global Variables Used in the Project
//
///////////////////////////////////////////////////////////////////////////////////

struct BootBlock bootobj;
struct SuperBlock superobj ;
struct UAREA uareaobj ; 

PINODE head = NULL;

///////////////////////////////////////////////////////////////////////////////////
// 
// Function Name : InitialiseUAREA()
// Description   : it is used to initialise UAREA
// Author        : Abhijeet SUresh Gorale
// Date          : 31/07/2026
//
///////////////////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    int i = 0 ;

    strcpy(uareaobj.ProcessName,"Myexe");

    for(i - 0 ; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Marvellous CVFS : UAREA gets initialise succesfully\n");

}


///////////////////////////////////////////////////////////////////////////////////
// 
// Function Name : InitialiseSuperBlock()
// Description   : it is used to initialise SuperBlock
// Author        : Abhijeet SUresh Gorale
// Date          : 31/07/2026
//
///////////////////////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODES ;
    superobj.FreeInodes = MAXINODES ;

    printf("Marvellous CVFS : SuperBlock gets initialise succesfully\n");
}
///////////////////////////////////////////////////////////////////////////////////
// 
// Function Name : CreateDILB()
// Description   : it is used to Create LinkList Of Inodes
// Author        : Abhijeet SUresh Gorale
// Date          : 31/07/2026
//
///////////////////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    int i = 0 ;
    PINODE  temp  = NULL;
    PINODE newn = NULL ;

    temp = head ;

    for(i = 1 ; i <= MAXINODES ; i++)
    {
        newn =(PINODE)malloc(sizeof(INODE));

        newn -> InodeNumber = i ;
        strcpy(newn->FileName,"\0");
        newn -> FileSize = 0 ;
        newn -> ActualFileSize = 0 ;
        newn -> FileType = 0 ;
        newn -> ReferenceCount = 0 ;
        newn -> Permission = 0 ;
        newn -> Buffer = NULL ;


        if(temp == NULL)
        {
            head = newn ;
            temp = head ;
        }
        else
        {
            temp ->next = newn ;
            temp = temp -> next ;

        }

    }
    printf("Marvellous CVFS : DILB gets Created succesfully\n");

}


///////////////////////////////////////////////////////////////////////////////////
// 
// Function Name : StartAuxillaryDataInitialisation()
// Description   : it is used to Call all such Functions which are used to 
//                 intialise Auxillary Data
// Author        : Abhijeet SUresh Gorale
// Date          : 31/07/2026
//
///////////////////////////////////////////////////////////////////////////////////

void StartAuxillaryDataInitialisation()
{
    
    strcpy(bootobj.Information,"Booting Process Of Marvellous CVFS is Completed");
    printf("%s\n",bootobj.Information);
    
    InitialiseUAREA();

    InitialiseSuperBlock();

    CreateDILB();


}

///////////////////////////////////////////////////////////////////////////////////
// 
// Entry Point Function Of A CVFS Project
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    char str[80] ={'\0'};       // filename
    char Command[5][20]={{'\0'}};  // how many COmmands 
    int iCount = 0 , iRet = 0 ;

    StartAuxillaryDataInitialisation();

    printf("--------------------------------------------------------------------\n");
    printf("------------Marvellous CVFS Started Succesfully---------------------\n");
    printf("--------------------------------------------------------------------\n");

    // Infinite Listing Shell

    while(1)
    {
        fflush(stdin);     // clear old buffer

        strcpy(str,"");     // clear str

        printf("\nMarvellous CVFS : >> ");
        fgets(str,sizeof(str),stdin);   

        iCount = sscanf(str,"%s %s %s %s %s",Command[0],Command[1],Command[2],Command[3],Command[4]);      // 5 command can be accepted 

        fflush(stdin);     // clear after useage

        if(iCount == 1)
        {
            if(strcmp(Command[0],"exit") == 0 )
            {
                printf("Thank You for using Marvellous CVFS\n");
                printf("Deallocating all Resoures of CVFS\n");
                break;                                          // loop ends because of less commands 
            }
        }
        else if(iCount == 2)
        {

        }
        else if(iCount == 3)
        {
            
        }
        else if(iCount == 4)
        {
            
        }
        else
        {
            printf("Command not found\n");
            printf("plese refer Help option to get more information about commands\n");
            printf("please refer manual page of command using man\n");
            
        }

    
    }// end of while


    return 0 ;
}// end of main