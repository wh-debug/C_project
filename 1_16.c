//!修改打印最长文本行的程序的主程序main，使之可以打印任意长度的输入行的长度，并尽可能多的打印文本
#include "stdio.h"
#include "stdlib.h"

#define MAXLINE 1000

int getline(char argc[], int len);
void copy_char(char argc[], char src[]);

int main(void){ 
   int  len;
   int  max;
   char line[MAXLINE];
   char longest[MAXLINE];

   max = 0;
   while((len = getline(line, MAXLINE)) > 0){
       if(len > max){
           max = len;
           copy_char(longest, line);
       }
   }
    if(max > 0)
           printf("%s", longest);
    system("pause");
    return 0;
}

int getline(char argc[], int len){
    int c, i;

    for(i = 0; i < len - 1 && ((c = getchar()) != EOF) && (c != '\n'); ++i)
          argc[i] = c;
    if(c == '\n'){
        argc[i] = c;
        ++i;
    }
    argc[i] = '\0';
    return i;
}
void copy_char(char argc[], char src[]){
    int i = 0;

    while ((argc[i] = src[i]) != '\0')
        ++i; //?先执行加法，在执行赋值运算
}



