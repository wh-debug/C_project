#include "stdio.h"
#include "stdlib.h"

int main(void){
    int * p = NULL;
    int * q = NULL;
    int  i = 10;

    p = &i;
    q = p;
    
    printf("%d\n",*p);
    printf("%d\n",*q);
    system("pause");
    return 0;
}