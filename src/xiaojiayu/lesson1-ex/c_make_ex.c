#include<stdio.h>


int main(void)
{
    int number;
    int sum = 0;
    
    printf("please input number: \n");

    do
    {
        scanf("%d", &number);
        printf("%d\n", number);
        sum = sum + number;
    }while(getchar() != '\n'); // 先做后用

    printf("%d\n", sum);

    return 0;
}