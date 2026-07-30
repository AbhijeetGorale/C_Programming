// write a recurssion program which display below pattern
// A B C D E F 

#include<stdio.h>

void Display()
{
    static char i = 'A' ;   

    if( i <= 'F')   
    {
        printf("%C\t",i);
        i++;
        Display();
    }
    
}

int main()
{
    Display();

    return 0 ;
}