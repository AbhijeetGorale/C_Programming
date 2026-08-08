#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>   // only linux  System based 

int main()
{
    int fd = 0 ;
    int iRet = 0 ;

    fd =  open("Marvellous.txt",O_RDWR);    // read and write

    if(fd == -1)
    {
        printf("unable to open file\n");
    }
    else
    {
        printf("file get successfully opend with fd :%d\n",fd);
        
        iRet = write(fd,"Jay Ganesh...",13);   // location what how much(letters)

        printf("%d bytes gets succesfully written",iRet);

        close(fd);
    }

    return 0 ;
}