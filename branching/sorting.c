#include <stdio.h>

int main() {
    int angka[] = {5, 10, 1, 7, 3};
    int n = sizeof(angka) / sizeof(angka[0]);

    int terbesar = angka[0];
    int terkecil = angka[0];

    for (int i = 1; i < n; i++) {
        if (angka[i] > terbesar)
            terbesar = angka[i];
        if (angka[i] < terkecil)
            terkecil = angka[i];
    }

    printf("Terbesar: %d\n", terbesar);
    printf("Terkecil: %d\n", terkecil);

    return 0;
}
