// write a program which check whether first and last bit is ON or OFF.
// First Bit means bit number 1 and bit number 32

#include<stdio.h>

typedef int BOOL ;
typedef unsigned int UINT ;

#define TRUE 1
#define FALSE 0 

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x80000001;
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
        printf("1st and Last Bit is ON ");
    }
    else
    {
        printf("Bits are OFF");
    }

    return 0  ;
}