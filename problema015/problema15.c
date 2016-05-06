#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double r, s, d;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    r = pow(a + b, 2);
    s = pow(b + c, 2);
    d = (r + s) / 2;

    printf("O VALOR DE D = %0.2f\n", d);

    return 0;
}
