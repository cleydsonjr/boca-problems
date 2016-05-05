#include <stdio.h>

int main() {
    int a, b, c, d;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);

    double det = a * d - b * c;

    printf("O VALOR DO DETERMINANTE E = %0.2f\n", det);

    return 0;
}