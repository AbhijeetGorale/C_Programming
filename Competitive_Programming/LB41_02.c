//write a recursive program which accept number from user and return summation of its Digit 
// input = 879
//output = 24


#include<stdio.h>

int Sum(int iNo)
{
    int  iSum = 0 ;

    if(iNo == 0)
    {
        return 0;
    }

    return (iNo % 10)+Sum(iNo / 10) ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Summation of all Digit : %d\n",iRet);

    return 0 ;
}