/*
* 三个版本均可以实现: 将输入复制到输出的程序，将其中连续的多个空格用一个空格代替
*/
#include "stdio.h"
#include "stdlib.h"

#define NONBLANK 'a'  //?目的是将last_char初始化为一个非空格字符

int main(void){
   int c,last_char;

   last_char = NONBLANK;
   //*版本一
   /**
    while((c = getchar()) != EOF){
       if(c != ' ')
           putchar(c);
      if(c == ' ')
         if(last_char != ' ')
            putchar(c);
      last_char = c; //记录上次的字符
   }
   */
   /*
   * 版本二
   */
   /*while((c = getchar()) != EOF){
       if(c != ' ')
           putchar(c);
      else if(last_char != ' ')
            putchar(c);
      last_char = c;
   }    */
   /*
   *版本三
   */
   while((c = getchar()) != EOF){
       if((c != ' ') || (last_char != ' '))
           putchar(c);
      last_char = c;
   }  
    system("pause");
    return 0;
}