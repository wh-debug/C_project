#include "stdio.h"
#include "stdlib.h"

int array(int n)
{
    int num[2 * n];
    int i = 0;

    for(i = 0; i < 2*n; ++i)
    {
        num[i] = 0;
    }

    for(i = 0; i < 2*n; ++i)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}

int main(void)
{
    array(10);
    system("pause");
    return 0;
}