#include<stdio.h>

int main()
{
    char str[80] = {'\0'};


    printf("Enter Command :\n");
    scanf("%[^'\n']s",str);

    printf("Entered cammand is :%s\n",str);

    return 0 ;
}