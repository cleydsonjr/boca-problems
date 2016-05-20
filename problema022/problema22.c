#include <stdio.h>

int main() {
    float distancia, volume, consumo;

    scanf("%f", &distancia);
    scanf("%f", &volume);

    consumo = distancia / volume;

    printf("O CONSUMO MEDIO = %.2fKM/L\n", consumo);
}