#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0 ;

    fd =  creat("Marvellous.txt",0777);

    if(fd == -1)
    {
        printf("unable to create file\n");
    }
    else
    {
        printf("file get successfully create with fd :%d\n",fd);
        
    }

    return 0 ;
}