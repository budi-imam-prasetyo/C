#include <stdio.h>

int main (){
    int nilai1 = 50;
    int *pNilai1;
    pNilai1 = &nilai1;
    printf("Nilai 1 : %d\n", nilai1);
    printf("Alamat Nilai 1 : %p\n", &nilai1);
    printf("Nilai 1 melalui pointer : %d\n", *pNilai1);
    printf("Alamat pointer pNilai1 : %p\n", pNilai1);
    printf("Alamat pointer pNilai1 melalui & : %p\n", &pNilai1);

    int nilai[] = {10, 20, 30, 40, 50};
    int *pNilai;
    pNilai = nilai;
    printf("\n nilai ke 4: %d\n", *(pNilai + 3));
    return 0;

}