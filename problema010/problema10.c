#include <stdio.h>

int main() {
    int numero;

    scanf("%i", &numero);
    int n3 = numero % 10;
    int n2 = (numero - n3) / 10 % 10;
    int n1 = (numero - numero % 100) / 100;

    int soma = n1 + n2 * 3 + n3 * 5;
    int digito = soma % 7;
    int novo = numero * 10 + digito;

    printf("O NOVO NUMERO E = %i\n", novo);

    return 0;
}