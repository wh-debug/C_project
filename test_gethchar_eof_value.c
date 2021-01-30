#include "stdio.h"
#include "stdlib.h"

int main(void){
    int c = 0;

    while ((c = getchar()) != EOF)
    {
        printf("%d\n",c);
    }
    printf("%d - at EOF\n",c);
    system("pause");
    return 0;
}