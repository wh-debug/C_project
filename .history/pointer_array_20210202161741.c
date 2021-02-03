/*
 * @Author: Daylight
 * @Date: 2021-02-02 15:46:57
 * @LastEditTime: 2021-02-02 16:17:41
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \new_C\pointer_array.c
 */
#include "stdio.h"
#include "stdlib.h"

int main(void){
    int num[5] = {1, 2, 3, 4, 5};
    int len = 0;

    
    printf("%#x\n", &num);//! 等价于printf("%#x\n", &num[0]);
    printf("%d\n", num[1]);
    system("pause");
    return 0;
}