#include<iostream>

using namespace std;


int main(void)
{
    int number;
    int sum = 0;
    
    cout << "please input number: " << endl;  //是回车加清空缓冲区

    do
    {
        scanf("%d", &number);
        cout << number << endl;
        sum = sum + number;
    }while(getchar() != '\n');

    cout << sum << endl;

    return 0;
}