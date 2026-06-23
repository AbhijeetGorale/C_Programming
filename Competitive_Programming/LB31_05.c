/*
write a program whuch accept string from user and dissplay it in reverse order
input - marvellous
output- suollevram
*/

#include<stdio.h>

void  Reverse(char *str)
{
    int iCnt = 0 ;
    int i = 0;

    while(str[iCnt] != '\0')
    {
        iCnt++;
    }
    for(i = iCnt - 1 ; i >=0 ; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}

int main()
{
    char Arr[20];
    int iRet = 0 ;

    printf("Enter String :\n");
    scanf("%[^'\n]s",Arr);

    Reverse(Arr);

    return 0 ;

}