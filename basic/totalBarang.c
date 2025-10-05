//! Pak Vito
//* Tugas 1: Membuat program sederhana untuk menghitung total harga barang dan ukuran memori variabel harga barang

#include <stdio.h>

int main(){
    int barangSatu = 25000;
    int barangDua = 50000;
    int barangTiga = 30000;
    printf("---------------------------------------\n\n");

    printf("Harga Barang 1: %d\n", barangSatu);
    printf("Harga Barang 2: %d\n", barangDua);
    printf("Harga Barang 3: %d\n", barangTiga);

    int total_harga = barangSatu + barangDua + barangTiga;
    printf("Total Harga %d\n\n", total_harga);

    printf("Ukuran variabel harga_barang1: %zu bytes\n", sizeof(barangSatu));
    printf("Ukuran variabel harga_barang2: %zu bytes\n", sizeof(barangDua));
    printf("Ukuran variabel harga_barang3: %zu bytes\n", sizeof(barangTiga));
    printf("Ukuran variabel total_harga: %zu bytes\n", sizeof(total_harga));

    printf("---------------------------------------\n\n");

    return 0;
}