//! Pak Ghanim
//* Latihan 5: Membuat program fungsi untuk menjumlahkan dua bilangan dan menentukan apakah hasilnya positif atau negatif

#include <stdio.h>

int functionPrint(int x, int y) {
    int plus = x + y;
    return plus;
}

void jika(int hasil) {
    if (hasil > 0) {
        printf("Nilai positif\n");
    } else {
        printf("Nilai negatif\n");
    }
}


int main() {
    int a = 10;
    int b = 20;
    int tambah = functionPrint(a, b);
    jika(tambah);
    return 0;
}