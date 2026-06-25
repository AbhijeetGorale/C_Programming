/*
write a program which accept String from user and 
copy small character of that string into another string
input - Marvellous multi OS
output - arvellous ulti

*/

#include<stdio.h>

void StrCopySmall(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >='a') && (*src <= 'z'))
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

    StrCopySmall(Arr,Brr);

    printf("%s",Brr);

    return 0 ;
}
