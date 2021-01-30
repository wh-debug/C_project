/*2021年1月4日21:10:30
  功能：冒泡排序，由大到小
  作者：零到正无穷
*/

#include <stdio.h>
#include <stdlib.h>


/*
  与有小到大排序的区别在于
  if (arr[j] < arr[j + 1])这条语句的中的大小号不同
  整体来说一模一样
*/
void bubble_sort(int arr[], int len) {
        int i, j, temp;
        for (i = 0; i < len - 1; i++)
                for (j = 0; j < len - 1 - i; j++)
                        if (arr[j] < arr[j + 1]) {
                                temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
}

int main() {
        int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
        int len = (int) sizeof(arr) / sizeof(*arr);
        bubble_sort(arr, len);
        for (int i = 0; i < len; i++)
                printf("%d ", arr[i]);
        system("pause");
        return 0;
}