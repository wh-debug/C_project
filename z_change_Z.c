#include "stdlib.h"
#include "stdio.h"

int main(void){
    printf("请输入小写字母：");
    char char_1;
    scanf("%c",&char_1);
    char_1 = char_1 - 32;
    printf("%c\n", char_1);
    system("pause");
    return 0;
}