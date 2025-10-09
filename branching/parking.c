//! Pak Ghanim
//* Latihan 1: Membuat program sederhana untuk menghitung biaya parkir berdasarkan lama parkir

#include <stdio.h>

int main()
{
    int jam;
    printf("Masukan berapa lama kamu parkir : ");
    scanf("%d", &jam);

    if (jam <= 2)
        printf("Biaya parkir kamu : Rp.5000\n");
    else
        printf("Biaya parkir kamu : Rp.%d\n", 5000 + (jam - 2) * 2000);
}