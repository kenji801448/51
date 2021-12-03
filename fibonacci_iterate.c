#include <stdio.h>

int main() {

    unsigned long long int previous_2 = 0, previous_1 = 1, current;
    for (int i = 0; i<100; i++) {
        if (i <= 1) {
            current = i;
        } else {
            current = previous_2 + previous_1;
            previous_2 = previous_1;
            previous_1 = current;
        }
        printf("f(%llu)=%llu\n", i, current);
    }
}
