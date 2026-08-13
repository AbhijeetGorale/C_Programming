#include<stdio.h>
#include<fcntl.h>
#include<string.h>  
#include<unistd.h>
#include<sys/stat.h>       // stat to calculate size 

#define BUFFER_SIZE 1024

void DisplayFileInfo(char FileName[])
{
    struct stat sobj ;

    stat(FileName,&sobj);

    printf("File Name :%s\n",FileName); 
    printf("iNODE numberf : %llu\n",sobj.st_ino);
    printf("file size :%d\n",sobj.st_size);
    
}

int main()
{
    
    char fName[30] = {'\0'};
    int iRet = 0 ;

    printf("Enter the file name :\n");
    scanf("%[^'\n]s",fName);

    DisplayFileInfo(fName);

    
    return 0 ;
}