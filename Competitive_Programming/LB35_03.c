// write a program which checks whether 7th 15th 21st and 28ths bit is on or off

#include<stdio.h>

typedef int BOOL ;
typedef unsigned int UINT ;

#define TRUE 1
#define FALSE 0 

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x08104040;
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
        printf("7th,15th,21st and 28th Bit is ON ");
    }
    else
    {
        printf("Bits are OFF");
    }

    return 0  ;
}