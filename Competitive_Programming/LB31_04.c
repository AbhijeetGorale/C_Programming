/*
write a program which accept string from user and check wheather it contains vowels in it or not

input -  marvellous
output - TRUE
input - Demo
output - true
input - XYZ
output - false
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
    char ch ='\0';
    while( *str != '\0')
    {
        ch = *str;
        if(ch== 'a' || ch == 'e'||  ch =='i'|| ch =='o' || ch =='u'
            ||ch== 'A'|| ch == 'E'|| ch =='I' || ch =='O'|| ch =='U')
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
    
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter String :");
    scanf("%[^'\n]s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("contains Vowel");
    }
    else
    {
        printf("There is  no Vowels");
    }

    return 0;
}