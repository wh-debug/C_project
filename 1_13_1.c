/*
! 题目：编写一个程序，打印输入中单词长度的直方图。
! 垂直直方图代码如下
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
    int mark = 0;


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
    //!查找Wordnum数组中的最大值并记录下标
    for(i = 0; i < MAXNUM; ++i){
        if(wordnum[mark] < wordnum[i]){
            mark = i;
        }
    }
    
    //!打印直方图
    for(i = wordnum[mark]; i > 0; --i){
        for(j = 1; j < MAXNUM; ++j){
            if(wordnum[j] != 0){
                if(wordnum[j] >= i){
                   printf("**  ");
                }else{
                   printf("    ");
                }
            }else{
                printf("    ");
            }
        }
        printf("\n");
    }

    //!打印下标
    for(i = 1; i < MAXNUM; ++i){
         printf("%-4d",i);    //!不能包含换行符，所以将其单独写在下方
    }

    printf("\n");

    //!测试单词的字符统计是否正确
    for(i = 1; i < MAXNUM; ++i)
        printf("%-4d", wordnum[i]);
   
    system("pause");
    return 0;
}
//! 关于%-4d说明
/*
* %-4d的四个字符每个都有各自的功能，具体如下：

* 1 %：格式字符串的引导标识，每个格式字符串必须以%开头。

* 2 -： 输出的内容左侧为有效数据，右侧为补足字符。

* 4：输出占4列宽度，不足用空格补齐，超出按实际长度输出。

* d: 按照10进制整型输出。
*/


