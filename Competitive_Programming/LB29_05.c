/*
accept division of student from user and 
depends on the division display exam timing,
there are 4 division in school as A,B,C,D
exam of division A at 7am B at 8.30am, C at 9.20am,D at 10.30 am
(aaplication should be case insensitive)

input - c
Ouput- your exam at 9.20
input- d
output- your exam at 10.30am
*/ 

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7.00 am");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 am");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 am");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 am");
    }
    else
    {
        printf("Enter valid division");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Your Division:\n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}