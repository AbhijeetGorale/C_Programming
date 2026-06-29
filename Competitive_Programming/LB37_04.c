/*write a program which accept one number and position from user and 
Toggle that BIT.return modified number

input  - 10 3
output - 14
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo ,int iPos)
{
    UINT iMask = 0x1;

    iMask = iMask << (iPos - 1) ; 

    iNo = iNo ^ iMask ;

    return iNo;
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

    iRet=ToggleBit(iValue,iLocation);

    printf("Modified number :%d\n",iRet);

    return 0;
}