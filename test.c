#include "stdio.h"
#include "stdlib.h"
#include "windows.h"

int main(void)
{
    int * p = NULL;
    char * q = NULL;
    /*system("mode con cols=66 lines=20");
    system("color 0A");
    printf("Dream it possible！\n");
    printf("%*s\n", 33, "123");
    printf("%5d\n", 1212124);*/
    printf("%d\n", sizeof(p));
    printf("%d\n", sizeof(q));
    printf("%d\n", sizeof(float *));
    system("pause");
    return 0;
}