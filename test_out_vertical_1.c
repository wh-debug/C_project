/*2021年1月4日20:18:36
 垂直输出直方图
*/
#include "stdio.h"
#include "stdlib.h"


int main(void){
    int i = 0,j = 0;
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
     int len = (int) sizeof(arr) / sizeof(*arr);

    for(i = 1; i >= 0; --i){
        printf("**");
        if(i <= 1){
           printf("  **");
        }
       if(i <= 1){
            printf("   **");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}