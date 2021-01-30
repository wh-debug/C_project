/*
 * @Author: your name
 * @Date: 2021-01-30 19:41:35
 * @LastEditTime: 2021-01-30 19:42:02
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \new_C\pointer_3.c
 */
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