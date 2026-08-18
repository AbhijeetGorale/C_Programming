#include<stdio.h>

int main()
{
    char str[80] ;
    char Command[5][20]={{'\0'}};
    int iRet = 0 ;

    printf("Marvellous CVFS : > ");
    fgets(str,sizeof(str),stdin);

    iRet = sscanf(str,"%s %s %s %s %s",Command[0],Command[1],Command[2],Command[3]);

    printf("Number of tokens are :%d\n",iRet);
    



    return 0 ;
}