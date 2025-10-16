#include <stdio.h>

int main() {
    int nilai_budi[5] = {80, 90, 75, 85, 95};
    // printf("Nilai Budi indeks 3: %d\n", nilai_budi[3]);
    
    int i;
    for (i = 0; i < 5; i++) {
        printf("Nilai Budi indeks %d: %d\n", i, nilai_budi[i]);
    }
}