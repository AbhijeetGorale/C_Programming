
#include<stdio.h>


int main()
{
    int Arr[5] = {0};
    int iCnt = 0 ;

    printf("ENTER THE ELEMENTS\n");
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    printf("Elements Of Array Are :\n");

    for(iCnt = 0 ; iCnt < 5 ;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
   
    
    

    
    return 0 ;
}