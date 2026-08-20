#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>
    


int main()
{
    #ifdef _WIN32       
        printf("project is running on Windows platform");
    #else
        printf("project is running on linux/MacOS platform");

    #endif
    


    return  0 ; 
}