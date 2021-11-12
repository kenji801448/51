#include <stdio.h>

int f(int i) {

    if (i <= 1) {
        return i;
    }
    return f(i-1) + f(i-2);
}

int main() {


    for (int i = 0; i<40; i++) {
        printf("f(%d)=%d\n", i, f(i));
    }
}
