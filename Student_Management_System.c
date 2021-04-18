/*
 * 学生管理系统
 * 作者王涛
*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"

struct Student_Management_System
{
    int age;
    char name[10];
    int score;
    char sex;
};

/*
 * 对显示界面标签前面进行占位
*/
int Space_Occupy_seat(int num)
{
  for(int  i = 0; i < num; i++)
    printf(" ");

  return 0;
}
/*
 * 初始化用户显示界
*/
int User_Interface(void)
{
  printf("\n");
  Space_Occupy_seat(40);
  printf("Welcome to use\n");  //? 显示字体大小的方法
  printf("\n");
  Space_Occupy_seat(40);
  printf("1. 输 入 数 据\n");

  return 0;
}

/*
 * 设置窗口显示的大小
*/
int Windows_Size(void)
{
  system("mode con cols=100 lines=30");
  system("color 0A");
  
  return 0;
}


int main(void)
{
  Windows_Size();
  User_Interface();

  system("pause");
  return 0;
}