// write a program which checks whether 15th bit is on or off

#include<stdio.h>

typedef int BOOL ;
typedef unsigned int UINT ;

#define TRUE 1
#define FALSE 0 

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00004000 ; 
    UINT iAns = 0 ;
    
    iAns =  iNo & iMask ;
    if(iAns == iMask)
    {
        return TRUE ;
    }
    else
    {
        return FALSE ;
    }

}


int main()
{

    UINT iNo = 0;
    BOOL iResult = FALSE ;

    printf("Enter First Number :\n");
    scanf("%d",&iNo);

    iResult = ChkBit(iNo);

    if(iResult == TRUE)
    {
        printf("15th BIT is ON");

    }
    else
    {
        printf("15th BIT is OFF");
    }

    return 0  ;
}