#include<stdio.h>
#include<fcntl.h>
#include<string.h>   
#include<unistd.h>  //  for linux 

#define BUFFER_SIZE 1024

int main()
{
    
    write(1,"Jay Ganesh...",13);   //  printf internally calls write


    return 0 ;
}

// 0 stdin // 1 stdout // 2 error on cansole 