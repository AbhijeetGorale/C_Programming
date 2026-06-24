/*
write a program which accept string from user and accept one 
character reverse that string in place

input = abcd
output = dcba

input - abba
output - abba

*/

#include<stdio.h>
void StrRev(char *str)
{

    char *start = NULL;
    start = str;
    
    while(*str != '\0')
    {
        str++;
    }

    str--;
    
    while(start <= str)
    {
        printf("%c",*str);
        str--  ;
    }
}



int main()
{
    char Arr[20];
    
    printf("ENter String :");
    scanf("%[^\n]s", Arr);

    StrRev(Arr);

    return 0;
}