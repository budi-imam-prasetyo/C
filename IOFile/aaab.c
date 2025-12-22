#include <stdio.h>

int penjumlahan(int a, int b){
    return a + b;
}

int main(){
    FILE *input, *output;
    int angka1, angka2, hasil;
    input = fopen("input.txt", "r");
    fscanf(input, "%d %d", &angka1, &angka2);
    printf("Membaca angka dari input.txt: %d dan %d\n", angka1, angka2);
    fclose(input);
    hasil = penjumlahan(angka1, angka2);
    printf("Hasil penjumlahan: %d\n", hasil);
    output = fopen("output.txt", "w");
    fprintf(output, "Hasil penjumlahan: %d\n", hasil);
    fclose(output);
    printf("Penjumlahan selesai. Hasil disimpan di output.txt\n");
    return 0;
}