/* Accept number of rows and columns from user and Display below pattern
 input = iRow = 4 iCol = 4
 output = 2 4 6 8 10
          1 3 5 7 9
          2 4 6 8 10
          1 3 5 7 9

*/

# include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0 ;
    int iCnt = 0;

    for(i = 1; i<=iRow ; i++)
    {
        if( i % 2 == 1)
        {
            iCnt = 2;
        }
        else
        {
            iCnt = 1;
        }
        for(j=1; j<=iCol;j++)
        {
            printf("%d\t",iCnt);
            iCnt+=2;

        }
        printf("\n");
    }
}


int main()
{
    int iValue1 = 0, iValue2 = 0 ;

    printf("Enter number of rows and columns :");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0 ;
}