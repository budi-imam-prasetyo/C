//! Pak Vito
//* Latihan 6: Membuat program array 2D 

#include <stdio.h>

int main() {
    //! Array 2D integer
    // int nilai_akumulasi[3][3] = {
    //     {85, 90, 80},
    //     {75, 95, 85},
    //     {90, 80, 70}
    // };
    // int length = sizeof(nilai_akumulasi[0]) / sizeof(nilai_akumulasi[0][0]);
    // printf("Panjang array 2D: %d\n", length);

    // int i, j;
    // for (i = 0; i < length; i++) {
    //     for (j = 0; j < length; j++) {
    //         printf("nilai_akumulasi[%d][%d] = %d\n", i, j, nilai_akumulasi[i][j]);
    //     }
    // }

    //! Array 2D char
    char nama[4][20] = {
        "Mas Acid",
        "Mas Arkan",
        "Mas Budi",
        "Mas Arkan"
    };
    int usia[] = {20, 21, 19, 22};
    int nilai[] = {85, 90, 80, 95};

    int length = sizeof(nama) / sizeof(nama[0]);
    printf("Panjang array 2D: %d\n", length);

    for(int i = 0; i < length; i++) {
        printf("Nama: %s\n", nama[i]);
        printf("Usia: %d\n", usia[i]);
        printf("Nilai: %d\n", nilai[i]);
        printf("\n");
    }

}