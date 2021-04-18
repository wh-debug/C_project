#include "stdio.h"
#include "stdlib.h"

enum Weakday
{
    Monday, 
    Tuesday, 
    Wednesday, 
    Thursday, 
    Friday, 
    Saturday, 
    Sunday
};

void Output(enum Weakday num);

int main(void)
{
    Output(Wednesday);
    system("pause");
    return 0;
}

void Output(enum Weakday num)
{
    switch (num)
    {
        case 0: printf("Monday!\n");   break;
        case 1: printf("Tuesday!\n");  break;
        case 2: printf("Wednesday!\n");break;
        case 3: printf("Thursday!\n"); break;
        case 4: printf("Friday!\n");   break;
        case 5: printf("Saturday!\n"); break;   
        case 6: printf("Sunday!\n");   break; 
        default: break;
    }
}

