/*
 * @Author: 零到正无穷
 * @Date: 2021-01-30 20:40:33
 * @LastEditTime: 2021-01-30 20:57:40
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \new_C\exchange_number.c
 */
#include "stdio.h"
#include "stdlib.h"

/**
 * @description: 不能完成两个数的互换，因为局部变量再函数执行完成后会进行释放，那么数据将会消失
 * @param {int} a
 * @param {int} b
 * @return 没有返回值
 */
void exchange_num(int a, int b){
    int t = 0;

    t = a;
    a = b;
    b = t;
    return;
}
/**
 * @description: 指针互换两个数字
 * @param {*}
 * @return {*}没有返回值
 */
void exchange_num_pointer(int * p, int * q){
    int * t = NULL;

    t = p;
    p = q;
    q = t;
    printf("%d , %d\n", *p, *q);
    return;
}

/**
 * @description: main函数
 * @param {*}
 * @return {0}
 */
int main(void){
    int a = 3;
    int b = 5;

    exchange_num_pointer(&a, &b);
    printf("%d , %d\n", a, b);
    system("pause");
    return 0;
}
