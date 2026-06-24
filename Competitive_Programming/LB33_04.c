/*
write a program which accept string from user and accept one 
character. return index of last occurence  of that character

input = Marvellous Multi OS
char - M
output = 11

input - MArvellous Multi OS
char - e
output - 4

*/

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iRet = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iRet =  iCnt;

        }
        str++;
        iCnt++;
    }
    return iRet;
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

    iRet = LastChar(Arr, cVAlue);

    printf("CHaracter last occurnce is %d", iRet);

    return 0;
}