#include <stdio.h>

/**
 * Resolução do problema1
 * Exercício 6
 * Aluno: Cleydson Figueiredo
 */
int main() {
    double precoFabrica;

    scanf("%lf", &precoFabrica);
    double percentualFornecedor = precoFabrica * 0.12;
    double impostos = precoFabrica * 0.3;

    double precoFinal = precoFabrica + percentualFornecedor + impostos;

    printf("O VALOR DO CARRO E = %0.2f\n", precoFinal);
    return 0;
}