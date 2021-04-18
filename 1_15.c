/* 
!  <c程序设计语言> 练习1-15，重新编写1.2结中的温度转换程序，使得函数实现温度转换计算
*/
#include "stdio.h"
#include "stdlib.h"

#define LOWER 0
#define UPPER 300
#define STEP 20

void Change_C(int Down , int Up){
    int fahr;
    float celsius;

    fahr = Down;
    printf("Celsius fahr\n");
    while(fahr <= Up){
        celsius = 5.0 *  (fahr - 32.0) / 9.0;
        printf("%d\t%d\n",fahr,(int)celsius);
        fahr = fahr + STEP;
    }
    return 0;
}

int main(void){
    Change_C(LOWER, UPPER);
    system("pause");
    return 0;

}