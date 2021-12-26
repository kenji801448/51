#include <stdio.h>

int main() {

    int length = 100;
    unsigned long long int f[length];
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i < length; i++) {
        f[i] = f[i-1] + f[i-2];
    }

    for (int i = 0; i < length; i++) {
        printf("f[%d]=%llu\n", i, f[i]);
    }
}
