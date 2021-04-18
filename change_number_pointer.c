/*
 * @Author: Daylight
 * @Date: 2021-02-02 15:42:28
 * @LastEditTime: 2021-02-02 15:46:15
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \new_C\change_number_pointer.c
 */

#include "stdio.h"
#include "stdlib.h"


void change_num_pointer(int * p, int * q){

    *p = 12;
    *q = 13;
    return 0;
}
int main(void){
    int i = 0;
    int j = 1;

    change_num_pointer(&i, &j);
    printf("%d, %d\n", i, j);
    system("pause");
    return 0;
}