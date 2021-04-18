#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"

int swap(int * q)
{
    *q = 200;
    return 0;
}

int main(void)
{
    int lenger = 0;
    int * p = (int *)malloc(sizeof(int));
    printf("please input a number: ");
    scanf("%d", &lenger);
    int * t = (int *)malloc(sizeof(int) * lenger);
    *p = 10;
    printf("%d\n", *p);
    swap(p);
    printf("%d\n", *p);

    system("pause");
    return 0;
}