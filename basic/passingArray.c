// Online C compiler to run C program online
#include <stdio.h>

void printArray(int A[], int size){
    printf("\n\nIsi Arraynya adalah: ");
    for(int i = 0; i < size; i++){
        printf("%d ", A[i]);
    }
}

void nilaiMax(int A[], int size){
    int max = A[0];
    for(int i = 0; i < size; i++){
        if (A[i]>max){
            max = A[i];
        }
    }
    printf("Nilai Maximum adalah: %d", max);
}

int main() {
    int input;
    printf("Masukkan berapa jumlah Array: ");
    scanf("%d", &input);
    
    int A[input];
    
    for(int i = 0; i < input; i++){
        printf("Masukkan Array index ke %d: ", i);
        scanf("%d", &A[i]);
    }
    
    printf("%d\n", sizeof(A));
    printf("%d\n", sizeof(A[0]));
    int size = sizeof(A)/sizeof(A[0]);
    printf("Jumlah Array: %d elemen\n", size);
    
    printf("Isi Array sebelum dikirimkan adalah: ");
    for(int i = 0; i < size; i++){
        printf("%d ", A[i]);
    }
    
    printArray(A, size);
    
    nilaiMax(A, size);
    
    return 0;
}

//input -> *5 -> ^2