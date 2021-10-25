#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("請輸入一個整數︰");

    int i;

    scanf("%d", &i);
    printf("這個整數的個位數是%d\n", i % 10);

    system("pause");
    return 0;
}
