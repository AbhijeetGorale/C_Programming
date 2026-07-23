#include<stdio.h>

void Display(int *iPtr)
{
    printf("Value Of iPtr : %d\n",iPtr);
}

int main()
{

   int Arr[5] = {10,20,30,40,50};

   printf("Base Address Of Arr : %d\n",Arr);

   Display(Arr);


    return 0 ;
}