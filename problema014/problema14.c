#include <stdio.h>

int main() {
    int horas;

    scanf("%i", &horas);

    int periodosInteiros = horas / 3;
    int periodosQuebrados = horas % 3;
    double valor = periodosInteiros * 10 + periodosQuebrados * 5;

    printf("O VALOR A PAGAR E = %0.2f\n", valor);

    return 0;
}
