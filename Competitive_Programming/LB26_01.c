/*
accept number of rows and columns from user and display below pattern
input =  iRow - 4 , iCol - 4
output= * # # #
        * * # #
        * * * #
        * * * *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0 ;
    int j = 0;
    
    if(iRow != iCol)   
    {
        printf("invalid parameteres");
        printf("number of rows and column should be same");
        return;
    }

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ;j  <= iCol ; j++)
        {
            if(j <= i)   // diagonal 
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }

}

int main()
{

    int iValue1 = 0,iValue2 = 2 ;

    printf("Enter the number of rows and columns :");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0 ;
}



