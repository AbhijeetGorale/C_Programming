// write a recursive program which accept digit from user and returns product of Digits
// input = 523
// output = 30

#include<stdio.h>

int Mult(int iNo)
{
    if(iNo == 0 )
    {
        return  1 ;
    }
    return (iNo % 10) * Mult(iNo / 10);
}
int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Multiplication of digits is :%d\n",iRet);

    return 0 ;
}