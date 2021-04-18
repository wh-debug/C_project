#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"

//todo 第一种定义结构体的方式
//? 这种方式最实用
struct Student
{
    int age;
    char name[10];
    char sex;
    int score;
};
/*
//todo 第二种定义结构体的方式
struct Student
{
    int age;
    char name[10];
    char sex;
    int score;
}st;

//todo 第三种定义结构体的方式
struct
{
    int age;
    char name[10];
    char sex;
    int score;
};*/

int main(void)
{
    struct Student st = {12, "xiaohua", 'F', 64}; //? 初始化的同时可以赋值，但是定以后再整体赋值就是错的。
    struct Student st2;
    struct Student * ptr = &st;
    //st2 = {12, "xiaohua", 'F', 64}; //todo 这是错的赋值单个是对的，但是整体赋值是错的。
    printf("%d\n", st.age);           //todo 两种方式来读取结体中的数据
    printf("%d\n", ptr->age);         //todo 在程序内部会转化为ptr->age等价于(*ptr).age，这是一种规定
    printf("%c\n", (*ptr).sex);       //todo 和上一行的代码含义相同
    
    system("pause");
    return 0;
}