#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int id;
    char name[50];
    float nilai;
}Mahasiswa;

int main(){
    int n;

    Mahasiswa *mahasiswa;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    mahasiswa = (Mahasiswa *)malloc(n * sizeof(Mahasiswa));

    for(int i = 0; i < n; i++){
        printf("Masukkan ID mahasiswa ke-%d: ", i + 1);
        scanf("%d", &mahasiswa[i].id);
        getchar();
        printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
        fgets(mahasiswa[i].name, sizeof(mahasiswa[i].name), stdin);
        printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
        scanf("%f", &mahasiswa[i].nilai);
    }
    printf("\n=====Data Mahasiswa=====\n");
    for(int i = 0; i < n; i++){
        printf("|| Mahasiswa ke-%d:\n", i + 1);
        printf("|| ID: %d\n", mahasiswa[i].id);
        printf("|| Nama: %s", mahasiswa[i].name);
        printf("|| Nilai: %.2f\n", mahasiswa[i].nilai);
    }
    printf("========================\n");
}