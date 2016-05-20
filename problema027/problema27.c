#include <stdio.h>

int main() {
    float quilosFarinha, valorFarinha, litrosAgua, valorAgua, horasEnergia, valorEnergia, percentualImposto;

    scanf("%f", &quilosFarinha);
    scanf("%f", &valorFarinha);
    scanf("%f", &litrosAgua);
    scanf("%f", &valorAgua);
    scanf("%f", &horasEnergia);
    scanf("%f", &valorEnergia);
    scanf("%f", &percentualImposto);

    float custoFarinha = quilosFarinha * valorFarinha;
    float custoAgua = litrosAgua * valorAgua;
    float custoEnergia = horasEnergia * valorEnergia;
    float custoTotal = custoFarinha + custoAgua + custoEnergia;

    custoTotal = custoTotal * (1 + percentualImposto / 100);
    float valorVenda = custoTotal * 1.3f;

    printf("PRECO DE CUSTO = %.2f\n", custoTotal);
    printf("PRECO DE VENDA = %.2f\n", valorVenda);
}