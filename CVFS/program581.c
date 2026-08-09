#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>   
#include<string.h>

int main()
{
    int fd = 0 ;
    int iRet = 0 ;
    char Data [100] = {'\0'} ;

    fd =  open("Marvellous.txt",O_RDONLY);  // read only

    if(fd == -1)
    {
        printf("unable to open file\n");
    }
    else
    {
        printf("file get successfully opend with fd :%d\n",fd);
        
        iRet = read(fd,Data,13);         // read 13 bytes  

        printf("%d bytes gets succesfully read\n",iRet);

        printf("Data From file is : %s\n",Data);

        close(fd);
    }

    return 0 ;
}