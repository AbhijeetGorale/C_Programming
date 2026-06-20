/*
accept Character from user and chek whether it is alphabet or not(A-Z a-z)
input - F
Ouput- true
input- &
output- False
*/ 

#include<stdio.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL ;

BOOL ChkAlpha(char ch)
{
    if((ch >='A' && ch <='Z') || (ch >='a' && ch <='z'))
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

    bRet = ChkAlpha(cVAlue);

    if(bRet == TRUE)
    {
        printf("it  is alphabet");
    }
    else
    {
        printf("it is not alphabet");
    }
    return 0 ;
}