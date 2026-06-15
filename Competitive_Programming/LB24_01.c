/* Accept number of rows and columns from user and Display below pattern
   input= iRow = 4 iCol = 4
  output =  A B C D 
            A B C D 
            A B C D 
            A B C D 
            
  
*/

#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
    int i = 0 ;
    char j = 'A';

    for(i= 1; i <= iRow ; i++)
    {
        for(j= 'A' ;j < 'A' + iCol ; j++)
        {
            printf( "%c\t",j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter number of Rows and columns :",&iValue1,&iValue2);
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0 ;
}


