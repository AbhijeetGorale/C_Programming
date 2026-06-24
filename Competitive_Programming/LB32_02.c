/*
write a program which accept String from user and converts it into upper case  
input - Marvellous Multi OS
output - MARVELLOUS MULTI OS
*/

#include<stdio.h>

void StrUpper(char *str)
{
    
    while(*str != '\0')
    {
        if(*str >='a' && *str <='z')
        {
            *str= *str - 32;
        }
        str++;
    }

}

int main()
{
    char Arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    StrUpper(Arr);

    printf("Modified String is :%s",Arr);

    return 0;
}