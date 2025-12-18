#include <stdio.h>

typedef struct{
    char nama[50];
    int skor;
}Siswa;

int main(){
    FILE *asal;
    asal = fopen("siswa.txt", "w");

    Siswa dataNilai[] = {
        {"Andi", 85},
        {"Asep", 60},
        {"Budi", 100},
        {"Citra", 78},
        {"Dewi", 92},
        {"Eka", 88}
    };

    for(int i =0; i < 6; i++){
        fprintf(asal, "%s | %d\n", dataNilai[i].nama, dataNilai[i].skor);
    }
    
}