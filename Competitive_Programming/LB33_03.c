/*
write a program which accept string from user and accept one 
character. return index of first occurence  of that character

input = Marvellous Multi OS
char - M
output = 0

input - MArvellous Multi OS
char - w
output - -1

*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;

        }
        str++;
        iCnt++;
    }
    return -1;
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

    iRet = FirstChar(Arr, cVAlue);

    printf("CHaracter first occurance is %d", iRet);

    return 0;
}