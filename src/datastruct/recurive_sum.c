#include"stdio.h"

/* 递归求ｎ项和　*/
int recur_sum(unsigned int N)
{
    if(N == 1)
        return 1;
    else
        return recur_sum(N - 1) + N;
}



int main(void)
{

    printf("%d\n", recur_sum(100));
    return 0;

}