//! Pak Vito
//* Tugas 2: Membuat program sederhana untuk menghitung luas ruangan dan ukuran memori variabel panjang, lebar, dan luas ruangan

#include <stdio.h>

int main(){
    int panjang = 10;
    int lebar = 5;

    int luas_ruangan = panjang * lebar;
    printf("---------------------------------------\n\n");

    printf("Panjang Ruangan: %d meter\n", panjang);
    printf("Lebar Ruangan: %d meter\n", lebar);
    printf("Luas Ruangan: %d meter persegi\n\n", luas_ruangan);

    printf("Ukuran variabel panjang: %zu bytes\n", sizeof(panjang));
    printf("Ukuran variabel lebar: %zu bytes\n", sizeof(lebar));
    printf("Ukuran variabel luas_ruangan: %zu bytes\n", sizeof(luas_ruangan));

    printf("---------------------------------------\n");

    return 0;
}