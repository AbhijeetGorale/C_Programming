/*
write a program which accept String from user and copy the content of that
string into another String(implemnts Strcopy() function)

input - marvellous multi os
10

output - marvellous
note -  if third paramteter is greater than the size of source String them copy whole
String into destination
*/

#include<stdio.h>

void StrCopyX(char *src,char *dest,int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src ;
        src++;
        dest++;
        iCnt--;
    }
    *dest ='\0';
}

int main()
{
    char Arr[30] = "Marvellous Mulit OS";
    char Brr[30];

    StrCopyX(Arr,Brr,10);

    printf("%s",Brr);

    return 0 ;
}
