// write a program which acceept one number from user and OFF 7th bit of that 
// number if it is on . Return Modified Number 
// Input = 79
// output = 15

#include<stdio.h>
typedef unsigned int UINT;

UINT OFFBit(UINT iNo)
{
    UINT iMask = 0x40 ;
    UINT iResult = 0 ;

    iMask = ~iMask ;

    iResult = iNo & iMask;

    return iResult ;
}

int main()
{
    UINT iValue = 0 ;
    UINT iRet = 0 ;


    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = OFFBit(iValue);

    printf("Modified Number is :%d\n",iRet);

    return 0 ;

}

