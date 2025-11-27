#include <stdio.h>

int main(){
    int data[] = {10, 4, 2, 40, 12, 5};
    int n = sizeof(data)/sizeof(data[0]);
    for(int i = 0; i < n; i++){
        int min = i;
        for (int j = i + 1; j < n; j++){
            if(data[j] < data[min]){
                min = j;

            }
        }
        if(min != i){
            int temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }
    printf("\nSorted array:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
}