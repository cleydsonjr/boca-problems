#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    float delta = pow(b, 2) - 4 * a * c;

    printf("O VALOR DE DELTA E = %0.2f\n", delta);

    return 0;
}