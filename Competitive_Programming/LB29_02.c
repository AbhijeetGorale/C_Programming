/*
accept Character from user and chek whether it is Capital or not(A-Z)
input - F
Ouput- true
input- d
output- False
*/ 

#include<stdio.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL ;

BOOL ChkAlpha(char ch)
{
    if(ch >='A' && ch <='Z')
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
        printf("it  is capital alphabet");
    }
    else
    {
        printf("its not capital alphabet");
    }
    return 0 ;
}