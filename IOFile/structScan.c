#include <stdio.h>

typedef struct{
    char nama[50];
    int skor;
}Siswa;

int main(){
    FILE *asal;
    asal = fopen("siswa.txt", "r");

    Siswa dataNilai[6];
    int i = 0;
    while(i < 6 && fscanf(asal, "%s | %d\n", dataNilai[i].nama, &dataNilai[i].skor)==2) {
        printf("%-20s | %d\n", dataNilai[i].nama, dataNilai[i].skor);
        i++;
    }
    
    fclose(asal);
    
}