//! Pak Vito
//* Latihan 5: Membuat program array dan menampilkan nilai Ana dan Budi

#include <stdio.h>

int main() {
    int nilai_budi[] = {80, 90, 75, 85, 95};
    // printf("Nilai Budi indeks 3: %d\n", nilai_budi[3]);
    
    // for (i = 0; i < 5; i++) {
        //     printf("Nilai Budi indeks %d: %d\n", i, nilai_budi[i]);
    // }

    int nilai_Ana[5];
    nilai_Ana[0] = 70;
    nilai_Ana[1] = 85;
    nilai_Ana[2] = 90;
    nilai_Ana[3] = 80;
    nilai_Ana[4] = 95;
    
    int length = sizeof(nilai_budi) / sizeof(nilai_budi[0]);
    
    int i;
    for (i = 0; i < length; i++) {
        printf("Index %d\n", i);
        printf("Nilai Ana: %d\n", nilai_Ana[i]);
        printf("Nilai Budi: %d\n\n", nilai_budi[i]);

    }
}