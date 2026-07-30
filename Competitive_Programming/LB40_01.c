// write a recursive program which display below pattern
// input  - 5
// output - * * * * *

#include<stdio.h>

void Display(int iNo)
{
       
    if(iNo != 0)   
    {
        printf("*\t");
        Display(iNo-1); 
    }
    
}

int main()
{
    int iValue = 0 ;

    printf("Enter Frequency :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;
}