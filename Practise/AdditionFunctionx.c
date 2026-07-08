#include <stdio.h>

int Addtion(int No1,int No2)
{ 
    int Ans = 0;
    Ans = No1 + No2 ;
    return Ans; 
}

int main()
{

    int Ret = 0 ,A = 11, B = 10 ;

    Ret =Addtion(A,B);
    printf("Addition is :%d\n",Ret);
    
    return 0;
}



