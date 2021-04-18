#include "stdio.h"
#include "stdlib.h"

int main(void){
    int * p = NULL; /* 地址就是指针，指针就是指针
                    * p是指针变量
                    * p是变量的名字，int * 表示的是p变量存放的是
                    * int类型的变量的地址
                    * int * p : 不表示定义了一个名字叫做*p的变量
                    * int * p ：p是变量名，p变量的数据类型是int *类型
                    * 所谓int *类型实际就是存放int变量的地址的类型
                    */
    int i = 10;

    p = &i;     /*
                 *!p保存了i的地址，因此p指向了i，p不是i，i也不是p，
                 * 修改其中一个并不影响另一个
                 *!如果一个指针变量指向了一个普通变量，则
                 *! *指针变量 就完全等同于  普通变量
                 * 例子：
                 *   如果p是个指针变量，并且p存放了普通变量i的地址则p
                 * 指向了普通变量i，*p就完全等同于 i
                 * 或者说：在所有出现*p的地方均可以替换为i
                 * *p代表的是以p的内容为地址的变量
                */
    printf("%d\n", i);
    printf("%d\n", *p);
    system("pause");
    return 0;
}
