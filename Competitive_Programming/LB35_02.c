// write a program which checks whether 5th and 18th bit is on or off

#include<stdio.h>

typedef int BOOL ;
typedef unsigned int UINT ;

#define TRUE 1
#define FALSE 0 

BOOL ChkBit(UINT iNo)
{
    UINT iMask =0x00020010;
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
        printf("5th and 18th bits is ON");
    }
    else
    {
        printf("bits are OFF");
    }

    return 0  ;
}