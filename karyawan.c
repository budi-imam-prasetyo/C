#include <stdio.h>

int main(){
    char nama[ ]= "Budi Imam Prasetyo";
    int usia = 18;
    float gaji_bulanan = 10000000.5; //Aamiin 🤲

    printf("Nama: %s\n", nama);
    printf("Usia: %d tahun\n", usia);
    printf("Gaji bulanan: Rp %.2f\n", gaji_bulanan);

    printf("\nUkuran variabel nama: %lu byte\n", sizeof(nama));
    printf("Ukuran variabel usia: %lu byte\n", sizeof(usia));
    printf("Ukuran variabel gaji_bulanan: %lu byte\n", sizeof(gaji_bulanan));

    return 0;

}