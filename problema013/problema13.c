#include <stdio.h>
#include <math.h>

double PI = 3.1415;

int main() {
    double r, h;
    scanf("%lf", &r);
    scanf("%lf", &h);

    double area = 2 * PI * r * (h + r);
    double volume = PI * pow(r, 2) * h;
    printf("O VALOR DA AREA E = %0.2f\n", area);
    printf("O VALOR DO VOLUME E = %0.2f\n", volume);

    return 0;
}
