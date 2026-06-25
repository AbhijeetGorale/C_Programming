/*
write a program which accept  two String from user and 
concat second string after first.(implement StrConcat()function)
input - 1->Marvellous Infosystem
        2-> Logic Building
output - Marvellous Infosystem Logic Building

*/

#include<stdio.h>

void StrConcatX(char *src,char *dest)
{
   while( *dest != '\0')
    {
        dest++;
    }
    while(*src != '\0')
    {
        *dest = *src  ;
        src++ ;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS ";
    char Brr[30] = "Logic Building";

    StrConcatX(Brr,Arr);

    printf("%s",Arr);

    return 0 ;
}
