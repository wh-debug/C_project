/*
 * @Author: your name
 * @Date: 2021-02-01 22:21:09
 * @LastEditTime: 2021-02-01 22:27:31
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \new_C\char_pointer.c
 */
#include "stdio.h"
#include "stdlib.h"

int main(void){
    char * p = NULL;
    char Str = 'a';

    p = &Str;

    printf("%d\n",*p)
    system("pause");
    return 0;
}
