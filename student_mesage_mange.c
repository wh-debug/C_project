#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"

struct student_mesage_mange
{
    int age;
    float score;
    char name[20];
};

int main(void)
{
    int lenger;
    int i, j;
    struct student_mesage_mange * pArr;
    struct student_mesage_mange  st;
    

    //todo 输入学生人数
    printf("Please enter the number of students: \n");
    printf("lenger = ");
    scanf("%d", &lenger);
    printf("\n");

    pArr = (struct student_mesage_mange *)malloc(lenger * sizeof(struct student_mesage_mange));
    

    //todo 录入每个学生信息
    for(i = 0; i < lenger; ++i)
    {
        printf("The information of the %dth student is: \n", i + 1);

        printf("age = ");
        scanf("%d", &pArr[i].age);

        printf("name = ");
        scanf("%s", pArr[i].name);

        printf("score = ");
        scanf("%f", &pArr[i].score);
    }

    printf("\n\n\n");

    //todo 冒泡排序
    for(i = 0; i < lenger - 1; ++i)
    {
        for(j = 0; j < lenger - 1 - i; ++j)
        {
            if(pArr[j].score > pArr[j + 1].score)
            {
                st = pArr[j];
                pArr[j] = pArr[j + 1];
                pArr[j + 1] = st;
            }
        }
    }

    //todo 输出学生的信息
    for(i = 0; i < lenger; ++i)
    {
        printf("The information for the %d student is as follows:\n", i + 1);

        printf("age   = %d\n",  pArr[i].age);
        printf("name  = %s\n",  pArr[i].name);
        printf("score = %f\n",  pArr[i].score);
    }

    system("pause");
    return 0;
}



