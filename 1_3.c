#include "stdio.h"
#include "stdlib.h"

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void){
    int fahr;
    float celsius;

    fahr = LOWER;
    printf("Celsius fahr\n");
    while(fahr <= UPPER){
        celsius = 5.0 *  (fahr - 32.0) / 9.0;
        printf("%d\t%d\n",fahr,(int)celsius);
        fahr = fahr + STEP;
    }

    system("pause");
    return 0;

}