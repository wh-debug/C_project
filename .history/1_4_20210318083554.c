/*
* 根据书本上的华氏温度与摄氏温度对照表并非是等距的，华氏温度等距20的间隔
* 而摄氏温度并非是等距11，读者需要自行实验，原书本上的答案是错误的；
*/
#include "stdio.h"
#include "stdlib.h"

#define LOWER -17
#define UPPER 148
#define STEP 11

int main(void){
    float fahr;
    int celsius;

    celsius = LOWER;
    printf("fahr Celsius\n");
    while(celsius <= UPPER){
        fahr = (9.0 * celsius) / 5.0 + 32;
        printf("%d\t%.1f\n",celsius,floor(fahr));
        celsius = celsius + STEP;
    }
    system("pause");
    return 0;
}