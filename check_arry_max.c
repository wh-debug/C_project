#include "stdio.h"
#include "stdlib.h"

int main(void){
    int num[10] = {214,13,114,12,23,102,45,120,75,89};
    int mark = 0;
    
    for(int i = 0; i < 10; ++i){
        if(num[mark] < num[i]){
            mark = i;
        }
    }
    printf("%d\n", mark);
    printf("%d\n", num[mark]);
    
    system("pause");
    return 0;
}