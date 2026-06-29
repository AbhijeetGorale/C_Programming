/*write a program which accept  number from user and 
Toggle content of first and last nibble of number.return modified number
nibble - group of four bits

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo )
{
    UINT iMask = 0xF000000F;

    iNo = iNo ^ iMask ;

    return iNo;
}

int main()
{
    UINT iValue = 0 ;
    UINT iRet = 0 ;

    printf("enter number :\n");
    scanf("%u",&iValue);

    iRet=ToggleNibble(iValue);

    printf("Modified number :%u\n",iRet);

    return 0;
}