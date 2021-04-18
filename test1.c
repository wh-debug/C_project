#include "stdio.h"
#include "stdlib.h"


void bubble_sort(int arr[], int len) {
        int i, j, temp;
        for (i = 0; i < len - 1; i++)
          for (j = 0; j < len - 1 - i; j++)
             if (arr[j] > arr[j + 1]) {
                  temp = arr[j];
                  arr[j] = arr[j + 1];
                  arr[j + 1] = temp;
             }
}

int main(void){
    int num[10] = {21,13,114,12,23,102,45,120,75,89};
    int mark = 0;
    
    for(int i = 0; i < 10; ++i){
            if(num[mark] < num[i]){
                mark = i;
            }
    }

    printf("%d\n", mark);
    printf("%d\n", num[mark]);
    
    system("pause");
    return 0;
}