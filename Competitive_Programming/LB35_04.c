// write a program which checks whether 7th 8th and 9th bit is on or off

#include<stdio.h>

typedef int BOOL ;
typedef unsigned int UINT ;

#define TRUE 1
#define FALSE 0 

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x000001c0;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
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
        printf("7th,8th and 9th Bit is ON ");
    }
    else
    {
        printf("Bits are OFF");
    }

    return 0  ;
}