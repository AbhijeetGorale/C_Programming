// write a program which acceept one number from user and Toggle 7th bit of that 
// . Return Modified Number 
// Input = 137
// output = 201

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x40 ;
    UINT iResult = 0 ;

    iResult = iNo ^ iMask;

    return iResult ;
}

int main()
{
    UINT iValue = 0 ;
    UINT iRet = 0 ;


    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified Number is :%d\n",iRet);

    return 0 ;

}

