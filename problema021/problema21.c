#include <stdio.h>

int main() {
    double ipi, valor1, valor2, valorFinal, quantidade1, quantidade2;
    int codigo1, codigo2;
    scanf("%lf", &ipi);
    scanf("%d", &codigo1);
    scanf("%lf", &valor1);
    scanf("%lf", &quantidade1);
    scanf("%d", &codigo2);
    scanf("%lf", &valor2);
    scanf("%lf", &quantidade2);
    ipi = ipi / 100.0 + 1.0;
    valorFinal = valor1 * quantidade1 + valor2 * quantidade2;
    valorFinal = valorFinal * ipi;
    printf("O VALOR TOTAL A SER PAGO = %0.2f\n", valorFinal);
    return 0;
}