/*
write a program which accept String from user and count number of white spaces 
input - Maarvellous 121
output - 1
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0 ;
    while(*str != '\0')
    {
        if(*str ==' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;

}

int main()
{
    char Arr[20];
    int iRet = 0 ;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("%d",iRet);

    return 0;
}