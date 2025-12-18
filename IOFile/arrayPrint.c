#include <stdio.h>

int main(){
    FILE *asal;
    asal = fopen("array.txt", "w");

    int array[] = {85,90,78,92,88};

    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 0; i < size; i++){
        fprintf(asal, "%d\n", array[i]);
    }
    fclose(asal);
    
    return 0;
}
