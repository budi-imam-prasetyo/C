#include <stdio.h>
#include <string.h>

int main() {
    float tugas, uts, uas, nilaiAkhir;
    char grade[10];
    char keterangan[20];

    printf("Masukan nilai Tugas : ");
    scanf("%f", &tugas);
    printf("Masukan nilai UTS : ");
    scanf("%f", &uts);
    printf("Masukan nilai UAS : ");
    scanf("%f", &uas);

    nilaiAkhir = (tugas * 0.2) + (uts * 0.3) + (uas * 0.5);

    if (nilaiAkhir >= 85 && nilaiAkhir <= 100) {
        strcpy(grade, "A");
    } else if (nilaiAkhir >= 75 && nilaiAkhir <= 84) {
        strcpy(grade, "B");
    } else if (nilaiAkhir >= 65 && nilaiAkhir <= 74) {
        strcpy(grade, "C");
    } else if (nilaiAkhir >= 50 && nilaiAkhir <= 64) {
        strcpy(grade, "D");
    } else if (nilaiAkhir < 50) {
        strcpy(grade, "E");
    } else {
        strcpy(grade, "Invalid"); // sekarang aman
    }

    if (strcmp(grade, "A") == 0 || strcmp(grade, "B") == 0 || strcmp(grade, "C") == 0) {
        strcpy(keterangan, "Lulus");
    } else if (strcmp(grade, "D") == 0 || strcmp(grade, "E") == 0) {
        strcpy(keterangan, "Tidak Lulus");
    } else {
        strcpy(keterangan, "Nilai tidak valid");
    }

    printf("\nNilai Akhir : %.2f\n", nilaiAkhir);
    printf("Grade       : %s\n", grade);
    printf("Keterangan  : %s\n", keterangan);

    return 0;
}
