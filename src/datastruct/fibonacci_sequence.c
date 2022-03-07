#include"stdio.h"


int fibo_seq(int N)
{
    if(N <= 2)
        return 1;
    else
        return fibo_seq(N - 2) + fibo_seq(N - 1);
}

int main(void)
{

    printf("%d\n", fibo_seq(10));
    return 0;    
}N