// write a recursive program which display below pattern
// input  - 6
// output - a b c d e f 

#include<stdio.h>

void Display(int iNo,char ch)
{

    if(iNo != 0)   
    {
        printf("%c\t",ch);
        Display(iNo - 1 ,++ch); 
    }
    
}

int main()
{
    int iValue = 0 ;

    printf("Enter Frequency :");
    scanf("%d",&iValue);

    Display(iValue,'a');

    return 0 ;
}