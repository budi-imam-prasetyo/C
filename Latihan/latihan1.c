//! Pak Vito

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int umur = 20;
    float tinggi = 180.5;
    char nama[50] = "Budi";
    // nama[] = "Budi Imam Prasetyo"; // error karena nama adalah constant
    char nilai = 'A';
    float ipk = 3.99; //Aamiin
    char program_studi[] = "Ilmu Komputer";
    char universitas[] = "Satu University";
    bool transkrip_nilai = true; //true = 1, false = 0

    //! Format spesifier
    //? %d untuk integer
    //* %f untuk float
    //? %s untuk string
    //* %c untuk char
    //? %.2f untuk float dengan 2 angka di belakang koma

    printf("Umur saya tahun lalu adalah %d tahun\n\n", umur);
    umur = 22;

    // printf("Nama saya %s\n", nama);
    strcpy(nama, "Budi Imam Prasetyo");
    printf("Nama saya sekarang %s\n", nama);
    printf("Umur saya sekarang %d tahun\n", umur);
    printf("Tinggi saya %.2f cm\n\n", tinggi);
    printf("IPK saya %.2f Aamiin\n", ipk);
    printf("Saya kuliah di %s\n", universitas);
    printf("Saya di Program studi %s\n", program_studi);
    printf("Nilai saya %c\n", nilai);

    //operator logika && || !
    float nilai_tugas1 = 80;
    float nilai_tugas2 = 99;
    int result = (int) (nilai_tugas1 + nilai_tugas2)/2;
    printf("Nilai rata-rata tugas saya adalah %d\n", result);

    printf("Kesimpulan nilai adalah ....\n...\n..\n.\n");

    if(result > 80){
        printf("Lulus\n");
    } else {
        printf("Tidak Lulus\n");
    }
    //operator perbandingan < > <= >= == !=
    //operator aritmatika + - * / %
    //operator penugasan = += -= *= /= %=


    // printf("Memori nama %zu\n", sizeof(nama));
    // printf("Memori umur %zu\n", sizeof(umur));
    // printf("Memori tinggi %zu\n", sizeof(tinggi));
    // printf("Memori ipk %zu\n", sizeof(ipk));
    // printf("Memori program studi %zu\n", sizeof(program_studi));
    // printf("Memori universitas %zu\n", sizeof(universitas));
}