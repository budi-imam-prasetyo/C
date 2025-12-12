#include <stdio.h>

int main(){
    int n = 10;
    void *ptr = &n;
    printf("Value of n through void pointer: %d\n", *(int *)ptr);
    return 0;
}