#include "stdio.h"
#include "stdlib.h"

const int i = 10;
static int t = 9;

int test(void){
    t--;
    printf("%d\n", t);
    return 0;
}

int main(void){
    test();
    t--;
    printf("hello world!\n");
    printf("%d\n", t);
    system("pause");
    return 0;
}