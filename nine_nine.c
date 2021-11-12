#include <stdio.h>

void nine_nine() {

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%dx%d=%2d ", i, j, i*j);
        }
        printf("\n");
    }
}

int main() {

    nine_nine();
}
