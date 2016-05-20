#include <stdio.h>

int main() {
    float valorDolar, taxaCambio, icms, percentualLucro;

    scanf("%f", &valorDolar);
    scanf("%f", &taxaCambio);
    scanf("%f", &icms);
    scanf("%f", &percentualLucro);

    float valorCompra = valorDolar * taxaCambio;
    icms = icms / 100;

    float valorIcms = valorCompra * icms;
    percentualLucro = percentualLucro / 100;

    float valorLucro = valorCompra * percentualLucro;
    valorCompra = valorCompra + valorIcms + valorLucro;

    printf("O VALOR PAGO EM REAIS = %.2f\n", valorCompra);
}