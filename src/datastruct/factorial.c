#include"stdio.h"


/*     */
int factorial_power(unsigned int number)
{
    if(1 == number)
        return 1;
    else
        return factorial_power(number - 1) * number;
}



int main(void)
{
    printf("%d\n", factorial_power(7));
    return 0;
}