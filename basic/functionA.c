#include <stdio.h>

void tampilkanInformasi()
{
    printf("Welcome to the C Programming Language\n");
}

int hitung(int nilai1, int nilai2)
{
    int hasil = nilai1 + nilai2;
    return hasil;
}

int main()
{
    int nilai1;
    int nilai2;
    tampilkanInformasi();
    printf("Masukkan nilai pertama: ");
    scanf("%d", &nilai1);
    printf("Masukkan nilai kedua: ");
    scanf("%d", &nilai2);
    int total = hitung(nilai1, nilai2);
    printf("Hasil penjumlahan: %d\n", total);
    return 0;
}