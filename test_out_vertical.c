/*2021年1月4日20:18:36
 垂直输出直方图
*/
#include "stdio.h"
#include "stdlib.h"


int bubble_sort(int arr[], int len) {
        int i, j, temp;
        for (i = 0; i < len - 1; i++)
                for (j = 0; j < len - 1 - i; j++)
                        if (arr[j] < arr[j + 1]) {
                                temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
    return 0;
}
   
int output_number(int len){
    int i = 0;

    for(i = 1; i <= len; ++i)
         printf("%-5d",i);
    printf("\n");
    return 0;
}


int output_vertical(int arr[],int sum){
    int i = 0;

      for(i = arr[sum - sum]; i >= 0; --i){
        printf("**");
       if(i <= arr[sum - sum + 1]){
           printf("  **");
        }
       if(i <= arr[sum - sum + 2]){
            printf("   **");
        }
        if(i == 0){
            printf("\n");
            output_number(3);
        }          
        printf("\n");
    }
    return 0;
}

int main(void){
    int sum[] = {20,10,35,};
    int len = (int)sizeof(sum)/sizeof(*sum);
    
    bubble_sort(sum,len);
    output_vertical(sum,len);   
    system("pause");
    return 0;
}