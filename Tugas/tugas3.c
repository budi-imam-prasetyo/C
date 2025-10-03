//! Pak Vito

#include <stdio.h>

int main(){
    int gaji_bulanan = 5000000;
    int bonus_mingguan = 200000;
    int total_bonus = bonus_mingguan * 4;
    int total_gaji = gaji_bulanan + total_bonus;

    printf("---------------------------------------\n\n");
    
    printf("Gaji Bulanan: %d\n", gaji_bulanan);
    printf("Bonus Mingguan: %d\n", bonus_mingguan);
    printf("Total Bonus Bulanan: %d\n", total_bonus);
    printf("Total Gaji Bulanan: %d\n\n", total_gaji);
    printf("Ukuran variabel gaji_bulanan: %zu bytes\n", sizeof(gaji_bulanan));
    printf("Ukuran variabel bonus_mingguan: %zu bytes\n", sizeof(bonus_mingguan));
    printf("Ukuran variabel total_bonus: %zu bytes\n", sizeof(total_bonus));
    printf("Ukuran variabel total_gaji: %zu bytes\n", sizeof(total_gaji));

    printf("---------------------------------------\n\n");

    return 0;
}