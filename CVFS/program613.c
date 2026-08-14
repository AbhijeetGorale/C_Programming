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
    int ReferenceCount ;               // how many instances accessing the file
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
// Function Name : InitialiseUAREA
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
// Function Name : InitialiseSuperBlock
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
// Entry Point Function Of A CVFS Project
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    InitialiseUAREA();

    InitialiseSuperBlock();



    return 0 ;
}