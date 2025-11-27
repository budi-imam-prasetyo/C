#include <stdio.h>

int main(){
    int a = 50;
    int b = 30;
    printf("Sebelum Swap: a = %d, b = %d\n",a,b );
    a = a + b;
    // printf("Sebelum Swap: a = %d, b = %d\n",a,b );
    b = a - b;
    // printf("Sebelum Swap: a = %d, b = %d\n",a,b );
    a = a - b;
    printf("Sebelum Swap: a = %d, b = %d\n",a,b );

}