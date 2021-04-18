#include "stdio.h"
#include "stdlib.h"

/*
2维数组行列变换
*/

int main(void)
{
    int a[2][3] = {{1,2,3}, {4,5,6}};
    int b[3][2],i,j;

    printf("array a；\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
           printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    
    printf("array b: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%4d", b[i][j]);            
        }
        printf("\n");
    }

    system("pause");
    return 0;
}