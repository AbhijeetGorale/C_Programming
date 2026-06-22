/* accept character from user if character is small display its 
 its corresponding capital character and if it is small then display 
 its corresponding capital in other cases Display as it is

 input - Q
 ouput - q

 input - m
 output - M

 Input - 4 
 output- 4
*/

#include<stdio.h>


void Display(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Result: %c\n", ch - 32);
    } 
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("Result: %c\n", ch + 32);
    } 
    else
    {
        printf("Result: %c\n", ch);
    }
        
}

int main()
{

    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}