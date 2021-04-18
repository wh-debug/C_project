/*
* 编写一个统计空格，制表符与换行符个数的程序
*/
#include "stdio.h"
#include "stdlib.h"

int main(void){
    int c;
    int backspace  = 0;
    int change_Row = 0;
    int tabulation = 0;


    while((c = getchar()) != EOF){
        if(c == ' '){
           ++backspace;
        }else if(c == '\n')
        {
           ++change_Row;
        }else if(c == '\t')
        {
           ++tabulation;
        }
    }
    printf("backspace  = %d\n",  backspace);
    printf("change_Row = %d\n", change_Row);
    printf("tabulation = %d\n", tabulation);
    system("pause");
    return 0;
}