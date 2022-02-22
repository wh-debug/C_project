#include<stdio.h>

int main(void)
{
    int number;
    int sum = 0;
    int array[3] = {0};
    
    printf("please input sum's number: ");

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &number);
        array[i] = number;
        printf("The input number is %d\n", number);
    }
    for(int i = 0; i < int(sizeof(array) / sizeof(int)); i++)
    {
        sum = array[i] + sum;
    }
    printf("output's sum is %d\n", sum);

    return 0;

}



