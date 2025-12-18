#include <stdio.h>

int main(){
    FILE *asal;
    asal = fopen("nama.txt", "r");

    if(asal == NULL) {
        printf("File tidak ditemukan!\n");
        return 1;
    }
    
    char nama[50];
    int umur;
    char alamat[100];
    // fscanf(asal, "%s %d %99[^\n]", nama, &umur, alamat);
    fscanf(asal, "%49[^\n]\n %d\n %99[^\n]", nama, &umur, alamat);
    fclose(asal);
    printf("Perkenalkan Nama Saya %s\n", nama);
    printf("Umur saya %d tahun\n", umur);
    printf("Alamat saya di %s\n", alamat);
    
    return 0;
}