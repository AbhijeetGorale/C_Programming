/*
write a program whicha accept String from user and copy the content of that String 
into another String (Implement Strcpy()function)

input - Marvellous Multi OS
output - Marvellous Multi OS <--- using another String
*/

#include<stdio.h>

void StrCopy(char *src,char *dest)
{
    while( *src != '\0')
    {
        *dest = *src ;
        src++;
        dest++;
        
    }
    *dest = '\0';

}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrCopy(Arr,Brr);

    printf("%s",Brr);

    return 0 ;
}