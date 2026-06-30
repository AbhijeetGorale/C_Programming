/*
write a program which accept one number from user,two position from user and check whether 
bit at first or bit at second position is ON or OFF

input - 10 3 7
output - TRUE

0 index
*/

#include<stdio.h>

typedef int BOOL ;
typedef unsigned int UINT ;

#define TRUE 1
#define FALSE 0 

BOOL ChkBit(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1 =0x1;
    UINT iMask2 = 0x1 ;
    UINT iResult = 0;

    iMask1 = 1 << iPos1 ;
    iMask2 = 1 << iPos2 ;

    iResult = iNo & (iMask1 | iMask2);

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
    UINT iLocation1 = 0 ;
    UINT iLocation2 = 0 ;


    printf("Enter  Number :\n");
    scanf("%d",&iValue);

    printf("Enter First location :\n");
    scanf("%d",&iLocation1);

    printf("Enter second location :\n");
    scanf("%d",&iLocation2);

    bRet = ChkBit(iValue,iLocation1,iLocation2);

    if(bRet == TRUE)
    {
        printf("bits are ON");
    }
    else
    {
        printf("bits are OFF");
    }

    return 0  ;
}