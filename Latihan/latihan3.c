#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nama[50];

    char program_Studi[50];

    char no_hp[15];

    int nilai_Alpro, nilai_Web, nilai_Mobile;
    int rata_Rata_Nilai = (nilai_Alpro + nilai_Web + nilai_Mobile) / 3;

    float ipk = 3.75;

    bool lulus;
    printf("Masukkan Nama : ");
    // scanf("%[^\n]%*c", nama);
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = 0;
    printf("Masukkan Program Studi : ");
    fgets(program_Studi, sizeof(program_Studi), stdin);
    program_Studi[strcspn(program_Studi, "\n")] = 0;
    printf("Masukkan No HP : ");
    fgets(no_hp, sizeof(no_hp), stdin);
    no_hp[strcspn(no_hp, "\n")] = 0;
    printf("Masukkan Nilai Alpro : ");
    scanf("%d", &nilai_Alpro);
    printf("Masukkan Nilai Web : ");
    scanf("%d", &nilai_Web);
    printf("Masukkan Nilai Mobile : ");
    scanf("%d", &nilai_Mobile);
    system("clear");
    
    printf("=============Informasi Mahasiswa=============\n");
    printf("||Nama : %s\n", nama);
    printf("||Program Studi : %s\n", program_Studi);
    printf("||No HP : %s\n", no_hp);
    printf("||Nilai Alpro : %d\n", nilai_Alpro);
    printf("||Nilai Web : %d\n", nilai_Web);
    printf("||Nilai Mobile : %d\n", nilai_Mobile);
    printf("||IPK : %.2f\n", ipk);
    
    if(rata_Rata_Nilai >= 75){
        lulus = true;
    }else{
        lulus = false;
    }
    
    printf("=============================================\n");
    if(lulus == true){
        printf("Selamat Anda Lulus");
    }else{
        printf("Mohon Maaf Anda Tidak Lulus");
    }


    return 0;
}