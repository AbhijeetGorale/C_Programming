/*
write a program which accept number from user and range of position of user 
and Toggle all bits from that range

input = 879 9 13 
Toggle all Bits  from position 9 to 13 of 879
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, UINT iStart, UINT iEnd)
{
    UINT iMask = 0;
    UINT i = 0 ;

    for(i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));  
    }

    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 0;
    UINT iStart = 0, iEnd = 0;
    UINT iResult = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    printf("Enter start position:\n");
    scanf("%d", &iStart);

    printf("Enter end position:\n");
    scanf("%d", &iEnd);

    iResult = ToggleBitRange(iValue, iStart, iEnd);

    printf("Result = %u\n", iResult);

    return 0;
}