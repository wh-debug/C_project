#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"


void Wrap(void);
int print_Number_Histogram(int argc[], int len);
int print_MAXletter_Histogram(int argc[], int len);
int print_MINletter_Histogram(int argc[], int len);

#define MAXNUM    10   //! 单词的最大长度
#define MAXCHAR   26
#define IN        1
#define OUT       0

int main(void){
    int i = 0, j = 0;
    int c, mark = 0;
    int numchar[MAXNUM];
    int maxchar[MAXCHAR];
    int minchar[MAXCHAR];
    int nother = 0;
    char char_1 = 0;
    
    //!初始化数字个数的数组
    for(i = 0; i < MAXNUM; ++i){
        numchar[i] = 0;
    }
    for(i = 0; i < MAXCHAR; ++i){
        minchar[i] = 0;
        maxchar[i] = 0;
    }
    
    while ((c = getchar()) != EOF){
        if(c >= '0' && c <= '9'){
            ++numchar[c - '0'];
        }else if(c >= 'A' && c <= 'Z' ){
            ++maxchar[c - 'A'];
        }else if(c >=  'a' && c <= 'z'){
            ++minchar[c - 'a'];
        }else{
            ++nother;
        }
    }
    print_Number_Histogram(numchar, MAXNUM);
    Wrap();
    
    print_MAXletter_Histogram(maxchar,MAXCHAR);
    Wrap();    

    print_MINletter_Histogram(minchar,MAXCHAR);
    Wrap();
    
    printf("other character = %d\n",nother);
    system("pause");
    return 0;
}


int print_Number_Histogram(int argc[], int len){
    int i = 0, j = 0;
    int mark = 0;
     //!查找Wordnum数组中的最大值并记录下标
    for(i = 0; i < len; ++i){
        if(argc[mark] < argc[i]){
            mark = i;
        }
    }
    
    //!打印直方图
    for(i = argc[mark]; i > 0; --i){
        for(j = 0; j < len; ++j){
            if(argc[j] != 0){
                if(argc[j] >= i){
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
    for(i = 0; i < len; ++i){
         printf("%-4d",i);    //!不能包含换行符，所以将其单独写在下方
    }
    return 0;
}

int print_MAXletter_Histogram(int argc[], int len){
    int i = 0, j = 0;
    int mark = 0;
    char char_1;
     //!查找Wordnum数组中的最大值并记录下标
    for(i = 0; i < len; ++i){
        if(argc[mark] < argc[i]){
            mark = i;
        }
    }
    
    //!打印直方图
    for(i = argc[mark]; i > 0; --i){
        for(j = 0; j < len; ++j){
            if(argc[j] != 0){
                if(argc[j] >= i){
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
    for(char_1 = 'A'; char_1 <= 'Z'; ++char_1){
         printf("%-4c", char_1);    //!不能包含换行符，所以将其单独写在下方
    }
    return 0;
}

int print_MINletter_Histogram(int argc[], int len){
    int i = 0, j = 0;
    int mark = 0;
    char char_1;
    //!查找Wordnum数组中的最大值并记录下标
    for(i = 0; i < len; ++i){
        if(argc[mark] < argc[i]){
            mark = i;
        }
    }
    
    //!打印直方图
    for(i = argc[mark]; i > 0; --i){
        for(j = 0; j < len; ++j){
            if(argc[j] != 0){
                if(argc[j] >= i){
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
    for(char_1 = 'a'; char_1 <= 'z'; ++char_1){
         printf("%-4c", char_1);    //!不能包含换行符，所以将其单独写在下方
    }
    return 0;
}

void Wrap(void){
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    return 0;
}