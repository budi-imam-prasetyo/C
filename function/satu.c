#include <stdio.h>

void rubahNilaiArray(int nilai[], int length, char *nama[]){
    printf("\n=================== Setelah Array ==================\n");
    for(int i = 0; i < length; i++){
        printf("Nilai Mas %s: %d/100\n", nama[i], nilai[i]);
    }
}

int main(){
    int nilai[] = {10,20,30,40,50};
    char *nama[10] = {"asep", "cecep", "dede", "dodi", "jajang"};

    int length = sizeof(nilai)/sizeof(nilai[0]);
    printf("=================== Sebelum Array ==================\n");
    for(int i = 0; i < length; i++){
        printf("Nilai %s: %d/100\n", nama[i], nilai[i]);
    }

    rubahNilaiArray(nilai, length, nama);

}