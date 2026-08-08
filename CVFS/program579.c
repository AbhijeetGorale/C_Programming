#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>   // only linux  System based 

int main()
{
    int fd = 0 ;
    int iRet = 0 ;
    char Data [] = "Marvellous Infosystems";

    fd =  open("Marvellous.txt",O_RDWR | O_APPEND); 

    if(fd == -1)
    {
        printf("unable to open file\n");
    }
    else
    {
        printf("file get successfully opend with fd :%d\n",fd);
        
        iRet = write(fd,Data,10);   

        printf("%d bytes gets succesfully written",iRet);

        close(fd);
    }

    return 0 ;
}