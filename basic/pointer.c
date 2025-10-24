#include <stdio.h>

int main(){
    // int nilai1 = 5;
    // int *pNilai1 = &nilai1;

    // printf("Nilai1: %d\n", nilai1);
    // printf("Alamat Nilai1: %p\n", (void*)&nilai1);
    // printf("Nilai yang ditunjuk oleh pNilai1: %d\n", *pNilai1);
    // printf("Alamat pNilai1: %p\n", (void*)pNilai1);

    // return 0;

    int nilai[] = {5,7,9,6,8};
    int length = sizeof(nilai) / sizeof(nilai[0]);
    int *pnilai = &nilai[0];
    for(int i = 0; i < length; i++){
        printf("Element %d : %d\n", i, *(pnilai + i));
    }
}