// accept number from user to DIsplay below pattern
// 4
// output =  # 1 * # 2 * # 3 * # 4 *

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0 ;
    
    for (iCnt = 1 ; iCnt <= iNo * 3 ; iCnt++)

        if(iCnt %3 == 1)
        {
            printf("#\t");
            
        }
        else if(iCnt % 3 == 2)
        {
            printf("%d\t",(iCnt /3)+1);
        }
        else
        {
            printf("*\t");
        }

}

int main()
{

    int iValue = 0 ;

    printf("Enter the number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0 ;
}