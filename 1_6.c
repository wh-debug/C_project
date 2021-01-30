/*
* 说明:(!=)的优先级比复制运算=的优先级高，当执行{c = getchar() != EOF}时等价于执行{c = (getchar() != EOF)}所以当输入的不是文件结束符时
* c的值为1，当输入文件结束符时输出为0；
*/
#include "stdio.h"
#include "stdlib.h"

int main(void){
    int c;

    while(c = getchar() != EOF)
          printf("%d\n", c);
    printf("EOF = %d\n", c); //当输入ctrl+z时输出为0
    system("pause");
    return 0;
}