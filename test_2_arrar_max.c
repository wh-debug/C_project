#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int i,j;
    int row,column;
    int max = 0;
    int a[3][4] = {{1,2,3,4}, {9,8,7,6}, {-10,10,-5,2}};
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4 - 1; j++)
        {
            if(a[i][j] > a[i][j + 1])
            {
                max = a[i][j];
                row = i;
                column = j;
            }
        }
    }
    
    printf("max = %d, row = %d, column = %d\n", max, row, column);

    system("pause");
    return 0;
}