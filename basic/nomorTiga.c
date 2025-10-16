#include <stdio.h>

int main() {
    int a = 10, b = 2, c = 4;
    
    b = b - 1; // --b
    c += 1 - b; // c += 1 - --b
    a -= b * c; // a -= b * c


    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
}
