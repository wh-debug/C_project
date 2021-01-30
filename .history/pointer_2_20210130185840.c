/* 
!  2021年1月30日18:50:15
! 指针：便是一些复杂的数据结构
! 使函数返回一个以上的值，快速的传递数据
! 能直接访问硬件，能够方便的处理字符串
! 是理解面向对象的语言中引用的基础 
todo 指针的定义
     !地址
        * 内存单元的编号
        * 从零开始的非负整数
        !范围: 当前32位总线的是4G
     !指针
        * 指针就是地址，地址就是指针
        * 指针变量就是存放内存单元门编号的变量，或者说指针变量就是存放地址的变量
        * 指针和指针变量是两个不同的概念
        * 但是注意：通常我们叙述时会把指针变量简称为指针，实际上他们含义并不一样
        * 指针的本质就是一个操作首先的非负整数（指针不能相互进行运算，其相互运算没有任何意义）

todo 指针分类
*   1，基本类型的指针
*   2，指针和数组
*   3, 指针和函数
*   4，指针和结构体
*   5，多级指针
*/
/*
!错误代码
#include "stdio.h"
#include "stdlib.h"

int main(void){
    int * p = NULL;
    int i = 5;

    *p = i;
    printf("%d\n", *p);
    system("pause");
    return 0;
}
*/
#include "stdio.h"
#include "stdlib.h"

int main(void){

    system("pause");
    return 0;
}