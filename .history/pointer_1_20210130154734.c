#include "stdio.h"
#include "stdlib.h"

int main(void){
    int * p = NULL; //!p是变量的名字，int * 表示的是p变量存放的是int类型的变量的地址
    int i = 10;

    p = &i;     //!p保存了i的地址，因此p指向了i
    printf("%d\n", *p);
    system("pause");
    return 0;
}
