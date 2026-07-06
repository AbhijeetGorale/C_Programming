#include <stdio.h>

int Addtion(int No1,int No2)
{ 
    int Ans = 0;
    Ans = No1 + No2 ;
    return Ans; 
}

int main()
{

    int Ret = 0;

    Ret =Addtion(11,10);
    printf("Addition is :%d\n",Ret);
    
    return 0;
}



