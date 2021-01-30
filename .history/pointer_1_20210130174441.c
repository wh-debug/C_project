#include "stdio.h"
#include "stdlib.h"

int main(void){
    int * p = NULL; //!p是变量的名字，int * 表示的是p变量存放的是int类型的变量的地址
    int i = 10;

    p = &i;     /*
                 *!p保存了i的地址，因此p指向了i，p不是i，i也不是p，修改其中一个并不影响另一个
                 *!如果一个指针变量指向了一个普通变量，则
                 *! *指针变量 就完全等同于  普通变量
                 * 例子：
                 *   如果p是个指针变量，并且p存放了普通变量i的地址则p指向了普通变量i
                 * *p就完全等同于 i
                 * 或者说：在所有出现*p的地方均可以替换为i
                */
    i = 12;
    printf("%d\n", i);
    printf("%d\n", *p);
    system("pause");
    return 0;
}
