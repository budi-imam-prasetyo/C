//! Pak Ghanim
//* Latihan 1: Membuat program sederhana untuk menghitung total belanja dengan diskon

#include <stdio.h>

int main()
{
    int total;
    printf("Masukan berapa total belanjanya : ");
    scanf("%d", &total);
    printf("Total belanja kamu : Rp%d\n", total);

    if (total < 100000)
        printf("Total belanja kamu : Rp%d\n", total);
    else if (total >= 100000 && total < 500000)
        total -= (total * 0.1);
    else 
        total -= (total * 0.2);
        
    printf("Total belanja akhir kamu : Rp%.2f\n", (float) total);
}