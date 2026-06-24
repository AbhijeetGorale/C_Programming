/*
write a program which accept String from user and toggle case  
input - Marvellous Multi OS
output - MARVELLOUS MULTI OS
*/

#include<stdio.h>

void StrToggle(char *str)
{
    
    while(*str != '\0')
    {
        if(*str >='a' && *str <='z')
        {
            *str= *str - 32;
        }
        else if(*str >='A' && *str <='Z')
        {
            *str = *str +32;
        }
        str++;
    }

}

int main()
{
    char Arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    StrToggle(Arr);

    printf("Modified String is :%s",Arr);

    return 0;
}