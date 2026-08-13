#include<stdio.h>
#include<fcntl.h>
#include<string.h>  
#include<unistd.h>
#include<sys/stat.h>       // stat to calculate size 

#define BUFFER_SIZE 1024

int CalculateFileSize(char FileName[])
{
    struct stat sobj ;

    stat(FileName,&sobj);

    return sobj.st_size ; 
}

int main()
{
    
    char fName[30] = {'\0'};
    int iRet = 0 ;

    printf("Enter the file name :\n");
    scanf("%[^'\n]s",fName);

    iRet = CalculateFileSize(fName);

    printf("Size of File is :%d bytes\n",iRet);
    
    return 0 ;
}