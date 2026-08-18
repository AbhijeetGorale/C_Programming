#include<stdio.h>

int main()
{
    char str[80] = {'\0'};
    char Command1[20];
    char Command2[20];
    char Command3[20];


    printf("Enter Command :\n");
    fgets(str,sizeof(str),stdin);  // scanf

    printf("Entered command is :%s\n",str);

    sscanf(str,"%s %s %s",Command1,Command2,Command3);  // tokenise 
    
    printf("First token %s\n",Command1);
    printf("second token %s\n",Command2);
    printf("third token %s\n",Command3);





    return 0 ;
}