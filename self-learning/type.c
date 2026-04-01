#include <stdio.h>

int main()
{
    int a = 7, b = 2;
    int c;
    double d, e;

    c = a / b;
    d = a / b;
    e = (double)a / b;

    printf("c = %d\n", c);
    printf("d = %.1f\n", d);
    printf("e = %.1f\n", e);

    return 0;

}