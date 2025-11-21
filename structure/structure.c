#include <stdio.h>
#include <string.h>

struct mobil {
    char nama[50];
    int tahun;
    float harga;
} m[3];

int main(void) {
    char buf[100];
    for (int i = 0; i < 3; i++) {
        printf("Masukkan nama mobil %c: ", 'A' + i);
        fgets(m[i].nama, sizeof m[i].nama, stdin);
        size_t ln = strlen(m[i].nama);
        if (ln > 0 && m[i].nama[ln-1] == '\n') m[i].nama[ln-1] = '\0';

        printf("Masukkan tahun mobil %c: ", 'A' + i);
        fgets(buf, sizeof buf, stdin);
        sscanf(buf, "%d", &m[i].tahun);

        printf("Masukkan harga mobil %c: ", 'A' + i);
        fgets(buf, sizeof buf, stdin);
        sscanf(buf, "%f", &m[i].harga);
    }

    for (int i = 0; i < 3; i++) {
        printf("\nData Mobil %c:\n", 'A' + i);
        printf("Nama: %s\n", m[i].nama);
        printf("Tahun: %d\n", m[i].tahun);
        printf("Harga: %.2f\n", m[i].harga);
    }

    return 0;
}
