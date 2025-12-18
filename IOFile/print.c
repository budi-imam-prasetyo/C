#include <stdio.h>

int main(){
    FILE *asal;
    asal = fopen("nama.txt", "r");

    if(asal == NULL) return 1;
    
    char nama[50];
    fgets(nama, 50, asal);
    fclose(asal);
    printf("Perkenalkan Nama Saya %s\n", nama);
    
    return 0;
}