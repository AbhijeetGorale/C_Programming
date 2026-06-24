/*
write a program which accept string from user and accept one 
character check whather that character is present in string or not 

input = Marvellous Multi OS
char - e
output = TRUE

input - MArvellous Multi OS
char - w
output -FALSE

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL ;

BOOL ChkChar(char *str,char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char Arr[20];
    char cVAlue = '\0';

    BOOL bRet = FALSE ;

    printf("ENter String :");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character :");
    scanf(" %c",&cVAlue);

    bRet = ChkChar(Arr,cVAlue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("character not found");
    }

    return 0 ;
}

