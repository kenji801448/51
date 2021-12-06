#include <stdio.h>

int main() {
    //length of the integer array
    int count = 10;

    int a[count];

    printf("請輸入%d個整數。\n", count);

    //fetch value of array from keyboard input
    for (int i = 0; i < count; i++) {
        scanf("%d", &a[i]);
    }

    //print out the entire array
    for (int i = 0; i < count; i++) {
        printf("a[%d]=%d\n", i, a[i]);
    }
}
