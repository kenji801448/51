#include <stdio.h>

void sum() {

    int result = 0;
    for (int i = 1; i <= 10; i++) {
        result += i;
    }
    printf("1加到10的總和是%d\n", result);
}

int main() {

    sum();
}
