#include"stdio.h"


void hanoi(int N, char A, char B, char C)
{
    if(N == 1)
    {
        printf("将编号为%d的盘子直接从%c柱子移动到%c柱子\n", N, A, C);
    }
    else
    {
        hanoi(N - 1, A, C, B);
        printf("将编号为%d的盘子直接从%c柱子移动到%c柱子\n", N, A, C);
        hanoi(N - 1, B, A, C);
    }
}


int main(void)
{
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';
    int num = 0;

    printf("please enter the number of plates to move: ");
    scanf("%d", &num);

    hanoi(num, ch1, ch2, ch3);

    return 0;
}