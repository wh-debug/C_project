/*
* 代码的初步功能实现了
* 题目：编写一个将输入复制到输出的程序并将其中连续多个空格用一个空格代替
* 本代码也可以实现，但是不是很好，看起来很麻烦。相比较于答案的代码来说，答案的更好，
* 答案的思路想过但是不知道怎么实现
*/

#include "stdio.h"
#include "stdlib.h"

int main(void){
    int c;
    int backspace = 0;

    while((c = getchar()) != EOF){
        if(c == ' ' && backspace == 0){
            ++backspace;
        }
        if(backspace >= 2){
            backspace = 0;
            printf(" ");
        }
        if(c != ' ' && backspace == 1){
             backspace = 0;
              printf(" ");
        }
               
        if(c != ' '){
           printf("%c",c);
        }
   }
    system("pause");
    return 0;
}