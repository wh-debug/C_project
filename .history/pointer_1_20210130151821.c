#include "stdio.h"
#include "stdlib.h"

int main(void){
    int * p = NULL;
    int i = 10;

    *p = &i;
    printf("%d\n", *p);
    system("pause");
    return 0;
}
