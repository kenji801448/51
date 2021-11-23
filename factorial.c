#include <stdio.h>

void f(int a) {

    unsigned long long int r = 1;
    for (int i = 1; i <= a; i++) {
        r *= i;
    }
    printf("%d!=%llu\n", a, r);
}

int main() {

    for (int i = 1; i <= 40; i++) {
        f(i);
    }
}
