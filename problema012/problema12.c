#include <stdio.h>

int main() {
    double b, h;
    scanf("%lf", &b);
    scanf("%lf", &h);

    double volume = b * h / 3;
    printf("O VOLUME DA PIRAMIDE E = %0.2f\n", volume);

    return 0;
}
