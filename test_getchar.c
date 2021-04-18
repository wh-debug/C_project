#include "stdio.h"
#include "stdlib.h"

#define MaxNum 6

int main(void){
    int c = 0;
    int i = 0;
    char s[MaxNum];

    for(i = 0; i < MaxNum - 1 && (c = getchar()) != EOF; ++i){
          s[i] = c;
    }
    if(c == '\n'){
        ++i;
        s[i] = ' ';
    }
    printf("%s\n", s);
    system("pause");
    return 0;
}