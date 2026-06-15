// write a program from user and display below pattern
// input = 5
// output = 1 * 2 * 3 * 4 * 5 *

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0 ;
    
    for (iCnt = 1 ; iCnt <= iNo * 2 ; iCnt++)

        if(iCnt %2 == 1)
        {
            printf("%d\t", (iCnt / 2)+1);
            
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