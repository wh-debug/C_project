#include "iostream"


using namespace std;

//　结构体字节数计算：
/*
补齐原则，假如字节数不一，那么取其中最大的那个变量的字节数作为其他的变量类型所占的字节数
下面是12个字节
*/
struct student
{
    int age;
    char sex;
    float bodyhigh;
};

//c++结构体声明是的时候可以不用关键字struct
student xiaoming;

union  one4all
{
    int asd;
    float afdas;
    double har;
};


int main(int argc, char** argv)
{
    int * p = NULL;

    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(xiaoming) << endl;
    cout << sizeof(xiaoming.age) << endl;
    cout << sizeof(xiaoming.bodyhigh) << endl;
    cout << sizeof(xiaoming.sex) << endl;
    cout << sizeof(one4all) << endl;
    cout << sizeof(*p) << endl;
    cout << sizeof(p) << endl;


    return 0;
}