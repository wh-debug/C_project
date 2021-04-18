#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"


int main(void)
{
    int  i = 10;
    int * p = NULL;
    int ** q = NULL;

    p = &i;
    q = &p; //? 不能是*q = &p;因为这样就不能用取地址符了。*q指向的是p的地址。而**q指向的是整形变量i。

    printf("%d\n", **q);

    system("pause");
    return 0;
}