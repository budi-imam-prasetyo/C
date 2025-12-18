#include <stdio.h>

int main(){
    FILE *asal;
    asal = fopen("array.txt", "r");


    int array[5];
    int size = 5;
    for(int i = 0; i < size; i++){
        fscanf(asal, "%d", &array[i]);
        printf("Elemen ke-%d: %d\n", i + 1, array[i]);
    }
    fclose(asal);
    
    return 0;
}