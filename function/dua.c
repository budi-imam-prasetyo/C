#include <stdio.h>

void swapNilai(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Sebelum swap: x = %d, y = %d\n", x, y);
    swapNilai(&x, &y);
    printf("Setelah swap: x = %d, y = %d\n", x, y);

    return 0;
}