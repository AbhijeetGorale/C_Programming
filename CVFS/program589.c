#include<stdio.h>
#include<fcntl.h>   
#include<string.h>

#define BUFFER_SIZE 100    // macro


int main()
{
    int fd = 0 ;
    int iRet = 0 ;
    char Data[BUFFER_SIZE] = {'\0'} ;
   
    

    fd =  open("Marvellous.txt",O_RDONLY); 

    if(fd == -1)
    {
        printf("unable to open file\n");
    }
    else
    {
        lseek(fd,-10,2) ;     // fd , where , from where   2-> from end
        
        iRet = read(fd,Data,10);  
        
        printf("%d bytes  gets succesfully read\n",iRet);

        printf("Data from file is :%s\n",Data);
        

        close(fd);
    }

    return 0 ;
}

// 0 starting 
// 1 from existance (current location)
// 2 end 