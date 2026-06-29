/* write a program which accept one number and position from user and 
check whether bit at that position is on or off. if bit is on return TRUE 
otherwise return false

input  - 10 2 
output - FALSE
*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL ;

BOOL ChkBit(UINT iNo ,int iPos)
{
    UINT iMask = 0x1;

    iMask = iMask << (iPos - 1) ; 

    if(iNo & iMask)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    UINT iValue = 0 ;
    UINT iLocation = 0 ;
    UINT iRet = 0 ;

    printf("enter number :\n");
    scanf("%d",&iValue);

    printf("enter location:\n");
    scanf("%d",&iLocation);

    iRet=ChkBit(iValue,iLocation);

    if(iRet == 1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0 ;

}

