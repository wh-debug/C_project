/*
* 2021年1月8日12:13:59
* 作者：零到正无穷
* 练习1-5，修改温度转换程序，要求以逆序打印温度转换表程序。
* 以下两个主函数都可以，一个比较精简，一个较繁琐。
*/
#include "stdio.h"
#include "stdlib.h"

#define LOWER 0
#define UPPER 300
#define STEP 20


/*
int main(void){ 
    int fahr;
    float celsius;

    fahr = UPPER;
    printf("Celsius fahr\n");
    while(fahr >= LOWER){
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%d\t%d\n",fahr,(int)celsius);
        fahr = fahr - STEP;
    }
    system("pause");
    return 0;
}*/
/*
* 利用for循环改进后的主函数，相对来说比较精简。
*/
int main(void){ 
    int fahr;

    printf("Celsius fahr\n");
    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%d\t%d\n",fahr,(int)( 5.0 * (fahr - 32.0) / 9.0));
    system("pause");
    return 0;
}