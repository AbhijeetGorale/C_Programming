/*
write a program which accept string from user and accept one 
character. return frequency of that character

input = Marvellous Multi OS
char - M
output = 2

input - MArvellous Multi OS
char - w
output - 0

*/

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
            iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cVAlue = '\0';
    int iRet = 0;

    printf("ENter String :");
    scanf("%[^\n]s", Arr);

    printf("Enter the character :");
    scanf(" %c", &cVAlue);

    iRet = CountChar(Arr, cVAlue);

    printf("CHaracter frequency is %d", iRet);

    return 0;
}