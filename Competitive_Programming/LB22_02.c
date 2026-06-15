//accept number from user and display below pattern
// n = 5
// output = 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0 ;
    
    for (iCnt = 1 ; iCnt <= iNo * 2 ;iCnt++)

        if(iCnt %2 == 1)
        {
            printf("%d\t", iNo - (iCnt / 2));
            
        }
        else
        {
            printf("#\t");
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


    
