#include <stdio.h>

void print(){
    static int count = 0;
    printf("Count: %d\n", count++);
}

int main() {
    for(int i = 0; i < 5; i++) {
        print();
    }
    return 0;
}