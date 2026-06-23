/*
write a program  which accept string from user and return frequency between 
small character frequency between capital character

input -Marvellous
output - 9
*/

#include<stdio.h>

int Diffrence(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >='a' && *str <='z')
        {
            iCnt++;
        }
        else if(*str >='A' && *str <='Z')
        {
            iCnt--;
        }
    str++;
    }
    return iCnt ;


}

int main()
{
    char Arr[20];
    int iRet = 0 ;

    printf("Enter String:\n");
    scanf("%[^'\n]s",Arr);

    iRet = Diffrence(Arr);

    printf("frequency between small and capiital :%d",iRet);

    return 0;
}