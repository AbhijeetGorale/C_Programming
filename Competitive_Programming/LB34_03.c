/*
write a program which accept String from user and 
copy capital character of that string into another string
input - Marvellous Multi OS
output - MMOS

*/

#include<stdio.h>

void StrCopyCap(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >='A') && (*src <= 'Z'))
        {
            *dest = *src ;
            dest++;
        }
        src++ ;
    }
    *dest= '\0';

}

int main()
{
    char Arr[30] = "Marvellous Multi OS ";
    char Brr[30];

    StrCopyCap(Arr,Brr);

    printf("%s",Brr);

    return 0 ;
}
