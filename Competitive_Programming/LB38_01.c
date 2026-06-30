/*
write a program which accept one number from user and count number of ON (1)
BIT in it without using % and / operator 
input - 11
output - 3
*/

#include<stdio.h>
typedef unsigned  int UINT;

int CountOne(UINT iNo)
{
    UINT iCount = 0;
    while(iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            iCount++;
        }
        iNo = iNo >> 1;
    }
    return iCount;

}

int main()
{
    UINT iValue = 0 ;
    UINT iRet = 0 ;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("Number of ON(1) BIT is %d:",iRet);

    return 0 ;

}