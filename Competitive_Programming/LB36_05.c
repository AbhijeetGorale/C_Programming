// write a program which acceept one number from user and ON its frst 4 
// BIT Return Modified Number 
// Input = 137
// output = 201

#include<stdio.h>
typedef unsigned int UINT;

UINT ONBit(UINT iNo)
{
    UINT iMask = 0xF;
    UINT iResult = 0 ;

    iResult = iNo | iMask;

    return iResult ;
}

int main()
{
    UINT iValue = 0 ;
    UINT iRet = 0 ;


    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = ONBit(iValue);

    printf("Modified Number is :%d\n",iRet);

    return 0 ;

}

