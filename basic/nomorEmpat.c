#include <stdio.h>

int main()
{
    int a = 10, b = 2, c = 4;

    a -= b * (c += 1 - --b);

    printf("%d", a);
}
