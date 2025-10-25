#include <stdio.h>

int main(){
    int A[] = {15,9,1,7,5,};
    int length = sizeof(A)/sizeof(A[0]);
    for(int i = 0; i < length; i++){
        if(A[i]<10) printf(" %d ", A[i]); else printf("%d ", A[i]);
        for(int j = 0; j < A[i]; j++) printf("*");
        printf("\n");
        
    }
}