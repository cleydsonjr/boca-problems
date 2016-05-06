#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    double x, y;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);
    scanf("%i", &e);
    scanf("%i", &f);

    double divisor = a * e - b * d;
    x = (c * e - b * f) / divisor;
    y = (a * f - c * d) / divisor;

    printf("O VALOR DE X E = %0.2f\n", x);
    printf("O VALOR DE Y E = %0.2f\n", y);

    return 0;
}