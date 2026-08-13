#include<stdio.h>
#include<fcntl.h>
#include<string.h>   
#include<unistd.h>

#define BUFFER_SIZE 1024
#define  ERR_OPEN -1

// channge in parameter
int CountCapital(char *FileName)
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0 , iRet = 0 ;
    int iCount = 0 , i = 0 ;
    

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        return ERR_OPEN  ;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) !=0 )
    {
        for(i = 0 ; i <= iRet ; i++)
        {
            if(Buffer[i] > 'A' && Buffer[i] < 'Z')
            {
                iCount++;
            }

        }
        memset(Buffer,'\0',sizeof(Buffer));
    }

    return iCount ;
}

int main()
{
    
    char fName[30] = {'\0'};
    int iRet = 0 ;

    printf("Enter the file name :\n");
    scanf("%[^'\n]s",fName);

    iRet = CountCapital(fName);
    
    
    if(iRet == ERR_OPEN)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("number of capital letters are  :%d\n",iRet);
    }

    return 0 ;
}