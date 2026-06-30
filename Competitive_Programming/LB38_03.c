/*
write a program which accept one number from user and check whether 9th 
or 12th Bit is on or off

input - 257
output - TRUE
*/

#include<stdio.h>

typedef int BOOL ;
typedef unsigned int UINT ;

#define TRUE 1
#define FALSE 0 

BOOL ChkBit(UINT iNo)
{
    UINT iMask =0x00000900;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult != 0)
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
    BOOL bRet = 0 ;
    UINT iValue = 0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("9th OR 12th bits is ON");
    }
    else
    {
        printf("bits are OFF");
    }

    return 0  ;
}