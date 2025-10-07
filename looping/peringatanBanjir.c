//! Pak Ghanim
//* Latihan 1: Membuat program sederhana untuk memberikan peringatan banjir berdasarkan ketinggian air

#include <stdio.h>

int main(){
    int tinggiAir, jumlahJam;
    int totalTinggiAir = 0;
    float rataRata;

    printf("Masukkan jumlah jam pengukuran: ");
    scanf("%d", &jumlahJam);

    for (int jam = 1; jam <= jumlahJam; jam++) {
        printf("Masukkan tinggi air pada jam ke-%d (dalam cm): ", jam);
        scanf("%d", &tinggiAir);
        
        totalTinggiAir += tinggiAir;

        if (tinggiAir < 100) {
            printf("Jam ke-%d: Aman\n", jam);
        } else if (tinggiAir <= 200) {
            printf("Jam ke-%d: Siaga\n", jam);
        } else {
            printf("Jam ke-%d: Bahaya\n", jam);
        }
    }
    rataRata = (float)totalTinggiAir / jumlahJam;

    printf("\nRata-rata ketinggian air dalam %d jam adalah %.2f cm\n", jumlahJam, rataRata);

    if (rataRata < 100) {
        printf("Kesimpulan: Status rata-rata adalah Aman\n");
    } else if (rataRata <= 200) {
        printf("Kesimpulan: Status rata-rata adalah Siaga\n");
    } else {
        printf("Kesimpulan: Status rata-rata adalah Bahaya\n");
    }
}