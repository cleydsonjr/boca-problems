#include <stdio.h>

int main() {
    char nome1[8], nome2[8], nome3[8];

    int idade1, idade2, idade3;
    double peso1, peso2, peso3;

    scanf("%s", &nome1);
    scanf("%i", &idade1);
    scanf("%lf", &peso1);

    scanf("%s", &nome2);
    scanf("%i", &idade2);
    scanf("%lf", &peso2);

    scanf("%s", &nome3);
    scanf("%i", &idade3);
    scanf("%lf", &peso3);

    double pesoMedio = (peso1 + peso2 + peso3) / 3;

    printf("IDADE 1 = %i\n", idade1);
    printf("IDADE 2 = %i\n", idade2);
    printf("IDADE 3 = %i\n", idade3);
    printf("O PESO MEDIO E = %0.2f\n", pesoMedio);

    return 0;
}