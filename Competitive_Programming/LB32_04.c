/*
write a program which accept String from user and Display only DIGITS 
input - Marve89llous121
output - 89121
*/

#include<stdio.h>

void DisplayDigits(char *str)
{
    
    while(*str != '\0')
    {
        if(*str >='0' && *str <='9')
        {
            printf("%c",*str);
        }
        str++;
    }

}

int main()
{
    char Arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    DisplayDigits(Arr);

    return 0;
}