#include <stdio.h>

int main(){
    int rating[3][4] = {
        {9,8,5,7},
        {4,7,2,6},
        {5,9,6,8}
    };

    int baris = sizeof(rating) / sizeof(rating[0]);
    int kolom = sizeof(rating[0]) / sizeof(rating[0][0]);

    for(int i = 0; i < baris; i++){
        printf("====================\n");
        for(int j = 0; j < kolom; j++){
            printf("| %d |", rating[i][j]);
        }
        printf("\n");
        printf("====================\n");
    }
}