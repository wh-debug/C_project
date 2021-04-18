#include "stdio.h"
#include "stdlib.h"

#define NUM 5

int main(void)
{
    int i, j;
    int num2[10];
    int max = 0;

    for(i = 0; i < NUM; i++)
    {
        printf("please input %d number: ", i);
        scanf("%d", &num2[i]);
    }

    for(i = 0; i < NUM - 1; i++) 
    {
        for(j = 0; j < NUM - i - 1; j++) //减1的目的,想一想
        {
            if(num2[j] > num2[j + 1])
            {
                max = num2[j];
                num2[j] = num2[j + 1];
                num2[j + 1] = max;
            }
        }
    }

    for( i = 0; i < NUM; i++)
    {
        printf("%d\n", num2[i]);
    }
    system("pause");
    return 0;
}