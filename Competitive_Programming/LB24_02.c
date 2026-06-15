/* Accept number of rows and columns from user and Display below pattern
   input= iRow = 4 iCol = 4
  output =  A B C D 
            a b c d
            A B C D 
            a b c d
            
  
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    char j = '\0';
    char k = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
            k = 'A';
        else
            k = 'a';

        for(j = k; j <k + iCol; j++)
        {
            printf("%c ", j);
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


