#include <stdio.h>

int main(){
    FILE *asal;
    char name[50] = "Budi Imam Prasetyo\n";
    int umur = 18;
    char alamat[100] = "Jl. Cibaligo";

    asal = fopen("nama.txt", "w");
    fputs(name, asal);
    fprintf(asal, "%d\n", umur);
    fputs(alamat, asal);

    fclose(asal);
    printf("Sukses");
}