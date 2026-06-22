/* 
Accept character from user and checck wheather it is special Symbol or not (!,@,#,%,^,&,*)
input - %
output - TRUE
input - d
output - FALSE
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1 
#define FALSE 0

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch ==  '@' || ch == '$' || ch  == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return TRUE;
    }
    else
    {
        return FALSE ;
    }

}

int main()
{
    char cValue = '\n';
    BOOL bRet = FALSE;

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is speccial character ");
    }
    else
    {
        printf("it is not special character");
    }

    return 0;

}