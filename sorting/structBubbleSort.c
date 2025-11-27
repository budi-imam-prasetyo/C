#include <stdio.h>
struct countries{
    char name[50];
    char capital[50];
    int population;
};

void bubbleSort(struct countries arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].population > arr[j + 1].population) {
                struct countries temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main(){
    struct countries c[] = {
        {"Indonesia", "Jakarta", 270000000},
        {"Malaysia", "Kuala Lumpur", 32000000},
        {"Singapore", "Singapore", 6000000},
        {"Thailand", "Bangkok", 70000000},
    };
    int n = sizeof(c)/sizeof(c[0]);
    int populations[n];
    for(int i = 0; i < n; i++){
        populations[i] = c[i].population;
    }
    bubbleSort(populations, n);
    printf("Sorted populations:\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", populations[i]);
    }
    return 0;
}