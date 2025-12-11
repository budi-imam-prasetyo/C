#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i;
    for(i = 0; i < argc; i++){
        printf("argument %d: %s\n", i, argv[i]);
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
    return 0;
}