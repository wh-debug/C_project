#include"stdio.h"


int Function(int x)
{
    if(x == 0)
        return 0;
    else 
        return 2 * Function(x - 1) + x * x;
}

int main(void)
{
    for(int i = 0; i < 6; i++)    
        printf("%d\n", Function(i));
    return 0;
}