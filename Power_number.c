#include "stdio.h"
#include "stdlib.h"


int Power(int , int);//函数声明时的形式参数可以不做声明

int main(void){
    int value = 0;
    value = Power(3,3);
    
    printf("value = %d\n", value);
    system("pause");
    return 0;
}
//base 和 n是形式参数

int Power(int base,int n){
    int revalue = 1;
    for(int i = 0; i < n; ++i){
         revalue = revalue * base;
    }
    return revalue;
}

