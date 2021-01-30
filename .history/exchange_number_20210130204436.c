/*
 * @Author: 零到正无穷
 * @Date: 2021-01-30 20:40:33
 * @LastEditTime: 2021-01-30 20:44:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \new_C\exchange_number.c
 */
#include "stdio.h"
#include "stdlib.h"

void exchange_num(int a, int b){
    int t = 0;

    t = a;
    a = b;
    b = t;
    return;
}

int main(void){
    int a = 3;
    int b = 5;

    exchange_num(a, b);
    printf("%d,%d\n", a, b);
    system("pause");
    return 0;
}
