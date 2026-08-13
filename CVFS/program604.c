#include<stdio.h>
#include<fcntl.h>
#include<string.h>   // memset 
#include<unistd.h>

#define BUFFER_SIZE 1024

void FileCopy(char FileNameSRC[] , char FileNameDEST[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fdSRC = 0 , fdDEST = 0 , iRet = 0 ;
    

    fdSRC = open(FileNameSRC,O_RDONLY);

    if(fdSRC == -1)
    {
        printf("Unable to open Source file\n");
        return ;
    }
    
    fdDEST = creat(FileNameDEST,0777);

    if(fdDEST == -1)
    {
        printf("Unable to create destination file\n");
        return ;
    }

    while((iRet = read(fdSRC,Buffer,sizeof(Buffer))) !=0 )
    {
        write(fdDEST,Buffer,iRet);  
        memset(Buffer,'\0',sizeof(Buffer));      
    }

    close(fdSRC);
    close(fdDEST);
}

int main()
{
    
    char fNameSRC[30] = {'\0'};
    char fNameDEST[30] = {'\0'};

    printf("Enter the Source file name :\n");
    scanf("%[^'\n]s",fNameSRC);

    printf("Enter the Destination file name :\n");
    scanf(" %[^'\n]s",fNameDEST);   // space is  imp

    FileCopy(fNameSRC,fNameDEST);

    return 0 ;
}