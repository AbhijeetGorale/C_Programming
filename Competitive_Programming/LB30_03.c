/* accept character from user if character is capital display all 
character from the input character till Z .if it is small then display 
all the character in reverse order till a. in other cases return directly
 input - Q
 ouput -  Q R S T U V X Y Z 

 input - m
 output - m i k j i h g f e d c b a

 Input - 8
 output- 
*/

#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        while (ch <= 'Z')
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        while (ch >= 'a')
        {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }
    else
    {
        printf("Enter valid character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}