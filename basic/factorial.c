//! Pak Ganim
//* Faktorial

#include <stdio.h>

int factorial(unsigned int number)
{
    if (number <= 1) return 1;
    return number + factorial(number-1);
}

int main(){
    int x = 5;
    printf("factorial %d %d", x, factorial(x));
    return 0;
}