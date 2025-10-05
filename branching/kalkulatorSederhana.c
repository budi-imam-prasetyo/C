//! Pak Vito
//* Kalkulator Sederhana

#include <stdio.h>

int main(){
    char operasi;
    int angka1, angka2;
    float hasil;

    printf("Operasi Bilangan + - * /\n");
    printf("Masukan Operasi Bilangan : ");
    scanf("%c", &operasi);
    printf("Masukan Bilangan 1 : ");
    scanf("%d", &angka1);
    printf("Masukan Bilangan 2 : ");
    scanf("%d", &angka2);
    if(operasi == '+'){
        hasil = angka1 + angka2;
        printf("Hasil Penjumlahan nya adalah : %.2f", hasil);
    } else if(operasi == '-'){
        hasil = angka1 - angka2;
        printf("Hasil Pengurangan nya adalah : %.2f", hasil);
    } else if(operasi == '*'){
        hasil = angka1 * angka2;
        printf("Hasil Perkalian nya adalah : %.2f", hasil);
    } else if(operasi == '/'){
        hasil = (float) angka1 / angka2;
        printf("Hasil Pembagian nya adalah : %.2f", hasil);
    } else{
        printf("Masukin Operasi nya yang bener");
    }

    return 0;
}