// write a recurssion program which display below pattern
// a b c d e f

#include<stdio.h>

void Display()
{
    static char i = 'a' ;   

    if( i <= 'f')   
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