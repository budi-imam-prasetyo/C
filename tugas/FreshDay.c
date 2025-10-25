#include <stdio.h>

int main() {
    int max, min, hariMax, hariMin, i;
    float pendapatan[7], total = 0, rata;

    printf("================= Pendapatan Mingguan =================\n");
    for (i = 0; i < 7; i++) {
        printf("|| Hari ke %d: ", i + 1);
        scanf("%f", &pendapatan[i]);
    }
    printf("=======================================================\n");
    
    max = min = pendapatan[0];
    hariMax = hariMin = 1;
    
    for (i = 0; i < 7; i++) {
        total += pendapatan[i];
        if (pendapatan[i] > max) {
            max = pendapatan[i];
            hariMax = i + 1;
        }
        if (pendapatan[i] < min) {
            min = pendapatan[i];
            hariMin = i + 1;
        }
    }
    
    rata = total / 7;
    printf("|| Total Pendapatan Mingguan = %.0f\n", total);
    printf("|| Pendapatan tertinggi di hari ke-%d sebesar %d\n", hariMax, max);
    printf("|| Pendapatan terendah di hari ke-%d sebesar %d\n", hariMin, min);
    printf("|| Rata-rata Pendapatan = %.2f\n", rata);
    printf("=======================================================\n");

    return 0;
}
