#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"

struct student_mesage_mange
{
    int age;
    float score;
    char name[20];
};

void Outputmessage(struct student_mesage_mange *, int);
void Inputmessage(struct student_mesage_mange * , int);
void SortData(struct student_mesage_mange * , int);

int main(void)
{
    int lenger;
    struct student_mesage_mange * pArr;

    //todo 输入学生人数
    printf("Please enter the number of students: \n");
    printf("lenger = ");
    scanf("%d", &lenger);
    printf("\n");

    pArr = (struct student_mesage_mange *)malloc(lenger * sizeof(struct student_mesage_mange));
    
    Inputmessage(pArr, lenger);
    printf("\n\n\n");
    SortData(pArr, lenger);
    Outputmessage(pArr, lenger);

    system("pause");
    return 0;
}

void Outputmessage(struct student_mesage_mange * Pout, int len)
{
    int i;
    //todo 输出学生的信息
    for(i = 0; i < len; ++i)
    {
        printf("The information for the %d student is as follows:\n", i + 1);

        printf("age   = %d\n",  Pout[i].age);
        printf("name  = %s\n",  Pout[i].name);
        printf("score = %f\n",  Pout[i].score);
    }

    return 0;
}
void Inputmessage(struct student_mesage_mange * Pin, int len)
{
    int i;
    //todo 录入每个学生信息
    for(i = 0; i < len; ++i)
    {
        printf("The information of the %dth student is: \n", i + 1);

        printf("age = ");
        scanf("%d", &Pin[i].age);

        printf("name = ");
        scanf("%s", Pin[i].name);

        printf("score = ");
        scanf("%f", &Pin[i].score);
    }

    return 0;
}
void SortData(struct student_mesage_mange * Psort, int len)
{
    int i, j;
    struct student_mesage_mange  st;
     //todo 冒泡排序
    for(i = 0; i < len - 1; ++i)
    {
        for(j = 0; j < len - 1 - i; ++j)
        {
            if(Psort[j].score > Psort[j + 1].score)
            {
                st = Psort[j];
                Psort[j] = Psort[j + 1];
                Psort[j + 1] = st;
            }
        }
    }
    return 0;
}
