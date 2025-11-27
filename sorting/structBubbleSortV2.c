#include <stdio.h>
struct Mahasiswa{
    char kode[50];
    char name[50];
    float ipk;
};

void bubbleSort(struct Mahasiswa arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].ipk > arr[j + 1].ipk) {
                struct Mahasiswa temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main(){
    struct Mahasiswa c[] = {
        {"TI-SU-0101", "Budi",  4},
        {"TI-SU-0102", "Rasyad",  3.7},
        {"TI-SU-0103", "Hardian",  3.8},
        {"TI-SU-0104", "Arkan", 3.5},
    };
    int n = sizeof(c)/sizeof(c[0]);
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%s ", c[i].kode);
        printf("%s ", c[i].name);
        printf("%.1f\n", c[i].ipk);
    }
    bubbleSort(c, n);
    printf("\nSorting:\n");
    for(int i = 0; i < n; i++){
        printf("%s ", c[i].kode);
        printf("%s ", c[i].name);
        printf("%.1f\n", c[i].ipk);
    }
    return 0;
}