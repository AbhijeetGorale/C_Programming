/*
accept Character from user and chek whether it is small case or not(0-9)
input - g
Ouput- true
input- D
output- False
*/ 

#include<stdio.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL ;

BOOL Chksmall(char ch)
{
    if(ch >='a' && ch <='z')
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

    bRet = Chksmall(cVAlue);

    if(bRet == TRUE)
    {
        printf("it  is Small case character");
    }
    else
    {
        printf("its not small case character");
    }
    return 0 ;
}