/*
accept charcter from user andd display its ascii value in Decimal,octal,Hexadecimal format

inpput  - A 
Decimal - 65
Octal  -  0101
Hexadexcimal -  0X41
*/

#include<stdio.h>

void Display(char ch)
{
    
    printf("Decimal     : %d\n", ch);
    printf("Octal       : 0%o\n", ch);
    printf("Hexadecimal : 0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter thr character  :\n");
    scanf("%c",&cValue);
    
    Display(cValue);

    return 0 ;
}