#include<stdio.h>
#include<fcntl.h>   
#include<string.h>

#define BUFFER_SIZE 100    // macro


int main()
{
    int fd = 0 ;
    int iRet = 0 ;
    char Data[BUFFER_SIZE] = {'\0'} ;
   
    

    fd =  open("Marvellous.txt",O_RDONLY);  // read only

    if(fd == -1)
    {
        printf("unable to open file\n");
    }
    else
    {
        printf("file get successfully opend with fd :%d\n",fd);
        
        iRet = read(fd,Data,13);         

        printf("%d bytes gets succesfully read\n",iRet);

        printf("Data From file is : %s\n",Data);


        memset(Data,'\0',sizeof(Data));      
        
        iRet = read(fd,Data,3);         

        printf("%d bytes gets succesfully read\n",iRet);

        printf("Data From file is : %s\n",Data);         


        close(fd);
    }

    return 0 ;
}