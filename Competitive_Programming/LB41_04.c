// write a recursive program which accept number from user and returns its factorial
// input  = 5
// output = 120

#include<stdio.h>

int Fact(int iNo)
{
    int fact = 1 ;
    
    if(iNo > 1)
    {
        fact = iNo  * Fact(iNo - 1);
        
    }

    return fact ;
}

int main()
{
    int iValue = 0 , iRet = 0  ;

    printf("Enter Number  :\n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factorial is :%d\n",iRet);

    return 0 ;
}