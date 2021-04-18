/*
! 题目：编写一个从输入到输出的程序，并将其中的制表符替换为\t，将其中的回退符替换为\b，把反斜杠替换为\\
*/
#include "stdio.h"
#include "stdlib.h"

int main(void){
    int c;

    while((c = getchar()) != EOF){
        if(c == '\t')
           printf("\\t");
        else if(c == '\b')
           printf("\\b");
        else if(c == '\\')
           printf("\\\\");
        else
           putchar(c);
    }
    
    system("pause");
    return 0;
}