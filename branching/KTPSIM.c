//! Pak Vito
//* Tugas 5: Membuat program pendaftaran KTP dan tes mengemudi

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (){
    
    char nama[50];
    int usia, nilai;

    printf("=============Pendaftaran=KTP============\n");
    printf("||Masukan Nama Anda : ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = '\0';

    printf("||Masukan Usia Anda : ");
    scanf("%d", &usia);

    printf("||Nama Saya : %s\n||Usia Saya : %d Tahun\n", nama, usia);

    if(usia >= 17){
        printf("||Anda sudah boleh membuat KTP\n");
    } else{
        printf("||Anda belum boleh membuat KTP\n");
    }

    printf("||Masukan Nilai Tes Mengemudi Anda : ");
    scanf("%d", &nilai);
    if(nilai >= 90){
        printf("||Selamat Anda Lulus Tes Mengemudi\n");
    } else if(nilai >= 70 && nilai < 90){
        printf("||Anda Lulus, namun hanya membawa SIM saja\n");
    } else if(nilai >= 50 && nilai < 70){
        printf("||Anda Lulus, namun dengan nilai minimum\n");
    } else{
        printf("||Mohon maaf, Anda belum lulus Tes Mengemudi\n");
    }

}