#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pNilai = (int *)malloc(2 * sizeof(int));

    if(pNilai == NULL){
        printf("Alokasi Memori gagal\n");
        return 1;
    }

    pNilai[0] = 500;
    pNilai[1] = 100;
    
    printf("Isi nilai pertama: %d\n", pNilai[0]);
    printf("Isi nilai kedua: %d\n", pNilai[1]);
    pNilai = (int *)realloc(pNilai, 2 * sizeof(int));

    pNilai[2] = 105;
    pNilai[3] = 200;
    pNilai[4] = 250;
    pNilai[5] = 300;
    pNilai[6] = 350;
    pNilai[7] = 400;
    
    printf("Isi nilai pertama: %d\n", pNilai[0]);
    printf("Isi nilai kedua: %d\n", pNilai[1]);
    printf("Isi nilai ketiga: %d\n", pNilai[2]);
    printf("Isi nilai keempat: %d\n", pNilai[3]);
    printf("Isi nilai kelima: %d\n", pNilai[4]);
    printf("Isi nilai keenam: %d\n", pNilai[5]);
    printf("Isi nilai ketujuh: %d\n", pNilai[6]);
    printf("Isi nilai kedelapan: %d\n", pNilai[7]);
    

    free(pNilai);
    return 0;
}