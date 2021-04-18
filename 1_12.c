/*
! 题目：编写一个程序以每行一个单词的形式打印输入
*/
#include "stdio.h"
#include "stdlib.h"

#define IN  1
#define OUT 0

int main(void){
    int c, state;

    state = OUT;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            if(state == IN){
                putchar('\n');
                state = OUT;
            }
        }else if(state == OUT){
           state = IN;
           putchar(c);
        }else
        {
            putchar(c);
        }
        
    }
    system("pause");
    return 0;
}