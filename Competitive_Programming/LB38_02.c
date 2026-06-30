/*
write a program which accept two number from user and Display
position of common  ON  bits from that two  number
input  - 10 15 (1010 1111)
output - 2 4
*/

#include<stdio.h>
typedef unsigned  int UINT;

int CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iCnt = 0;
    UINT iPos = 1;

    iCnt = iNo1 & iNo2;

    while(iCnt != 0)
    {
        if((iCnt & 1) == 1)
        {
            printf("%d ", iPos);
        }
        iCnt = iCnt >> 1;
        iPos++;
    }

}

int main()
{
    UINT iValue1 = 0 ,iValue2 = 0;
    UINT iRet = 0 ;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    iRet = CommonBits(iValue1,iValue2);

    return 0 ;

}