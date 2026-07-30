// write a recursive program which accept string from user and count number of character
// input = Hello
//output = 5

#include<stdio.h>

int Strlen(char * str)
{
    int iCount = 0 ;

    if(*str == '\0')
    {
        return 0;
    }

    iCount = 1 + Strlen(str+1);

    return iCount;
    
}

int main()
{
    int iRet = 0 ;
    char arr[20];

    printf("Enter The String :\n");
    scanf("%s",&arr);

    iRet = Strlen(arr);

    printf("Numbber of Character are : %d",iRet);

    return 0 ;
}