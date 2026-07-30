// write a recurssion program which display below pattern
// * * * *

#include<stdio.h>

void Display()
{
    static int i = 1 ;   

    if( i<= 5)   
    {
        printf("*\t");
        i++;
        Display();
    }
    
}

int main()
{
    Display();

    return 0 ;
}