#include "stdio.h"
#include "stdlib.h"

#define MaxNum 10

int getline(char line[], int maxline);
void copy(char to[], char form[]);


int main(void){
    int len;
    int max;
    char line[MaxNum];
    char longest[MaxNum];
    
    max = 0;

    while((len = getline(line, MaxNum)) > 0)
         if(len > max){
             max = len;
             copy(longest,line);
         }
    if(max > 0)
          printf("%s\n", longest);
    system("pause");
    return 0;
}


int getline(char s[], int lim){
    int c, i;
    for(i = 0; (i < lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)//如果出现满足i < lim - 1;
                                                                             //的条年并且满足后两条，那么立刻结束or循环
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; //在数组结束时加上'\0'来表示数组字符串的结束，
    return i;
}

void copy(char to[], char from[]){
    int i = 0;
    while((to[i] = from[i]) != '\0')//由getline可知在字符串数组后面加上了'\0'，通过检查字符串数
                                    //组最后一位元素是否为''\0来进行判断是否复制结束
        ++i;
}