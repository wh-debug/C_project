/*
! 题目：编写一个程序，打印输入中单词长度的直方图。
! 水平直方图
! 垂直直方图在1_13_1.c中
! 可改善：不限制单词的长度，也能打印
*/
#include "stdio.h"
#include "stdlib.h"

#define MAXNUM    20 //!所输入单个单词字符的最大长度限制为长度
#define IN        1  //!在一个单词内
#define OUT       0  //!在一个单词外

int main(void){
    int  c, state;
    int  Count = 0, i = 0, j = 0;
    int  wordnum[MAXNUM];


    for(j = 0; j < MAXNUM; ++j)
        wordnum[j] = 0;

    state = OUT;
    //!统计输入每个单词的字符数目，限制单个单词的最大长度为20，
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            state = IN;
        }else if(state == OUT)
        {
            ++Count;
        }
        if(state == IN)
        {
            ++wordnum[Count];
            state = OUT;
            Count = 0;
        }
    }
    //!打印水平直方图
    for(i = 1; i < MAXNUM; ++i){
        printf("%d ",i);
        for(j = 0; j < wordnum[i]; ++j){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    //!测试单词的字符统计是否正确
    for(i = 1; i < MAXNUM; ++i)
        printf(" %d ", wordnum[i]);
    system("pause");
    return 0;
}