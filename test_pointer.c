/*
 * @Author: 零到正无穷
 * @Date: 2021-01-30 21:13:15
 * @LastEditTime: 2021-01-30 21:25:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \new_C\test_pointer.c
 */
int main(void){
    int a = 3;
    int * p = NULL;
    int ** q = NULL;
    
    p = &a;
    **q = &p;
    
    printf("%d\n", **q);
    system("pause");
    return 0;
}

