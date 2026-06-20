/*
accept Character from user and chek whether it is Digit or not(0-9)
input - 7
Ouput- true
input- d
output- False
*/ 

#include<stdio.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL ;

BOOL ChkDigit(char ch)
{
    if(ch >='0' && ch <='9')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cVAlue ='\0';
    BOOL bRet = FALSE ;

    printf("Enter the character :\n");
    scanf("%c",&cVAlue);

    bRet = ChkDigit(cVAlue);

    if(bRet == TRUE)
    {
        printf("it  is Digit");
    }
    else
    {
        printf("its not Digit");
    }
    return 0 ;
}