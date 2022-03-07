#include"stdio.h"
#include"time.h"


void printDigit(unsigned int N)
{
    if(N < 10)
        printf("%d", N);
}

void printout(unsigned int N)
{
    if(N >= 10)
        printout(N / 10);
    printDigit(N % 10); //高效化的输出是printDigit(N　-　[N / 10] * 10)
}



int main(void)
{
    clock_t start_time, end_time;
    double time = 0;

    start_time = clock();
    printout(76234);
    end_time = clock();
    time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
 
    printf("\n%.6f\n", time);
    return 0;
}