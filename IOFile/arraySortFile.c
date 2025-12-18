#include <stdio.h>


void sortingAlgorithm(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    FILE *asal;
    asal = fopen("array.txt", "r");


    int array[5];
    int size = 5;
    for(int i = 0; i < size; i++){
        fscanf(asal, "%d", &array[i]);

    }
    sortingAlgorithm(array, size);
    printf("Array setelah diurutkan adalah:\n");
    for(int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }
    FILE *asal2;
    asal2 = fopen("arraySorted.txt", "w");
    for(int i = 0; i < size; i++){
        fprintf(asal2, "%d\n", array[i]);
    }
    fclose(asal);
    
    return 0;
}