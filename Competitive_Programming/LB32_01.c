/*
write a program which accept String from user and converts it into lower case  
input - Marvellous Multi OS
output - marvellous multi os
*/

#include<stdio.h>

void StrLower(char *str)
{
    
    while(*str != '\0')
    {
        if(*str >='A' && *str <='Z')
        {
            *str= *str + 32;
        }
        str++;
    }

}

int main()
{
    char Arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    StrLower(Arr);

    printf("Modified String is :%s",Arr);

    return 0;
}