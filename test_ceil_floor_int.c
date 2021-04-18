#include "stdio.h"
#include "stdlib.h"


int main(void){
    float i = 1.9;
    int t = 0;

    t = (int)i;
    printf("%d\n",t);
    printf("%f\n",floor(i));
    printf("%f\n",ceil(i));    
    system("pause");
    return 0;
}