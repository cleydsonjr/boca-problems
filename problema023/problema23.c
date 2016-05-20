#include <stdio.h>

int main() {
    int numeroFuncionario, horasTrabalhadas, numeroFilhos;
    float valorHora, valorSalarioFamilia;

    scanf("%i", &numeroFuncionario);
    scanf("%i", &horasTrabalhadas);
    scanf("%f", &valorHora);
    scanf("%i", &numeroFilhos);
    scanf("%f", &valorSalarioFamilia);

    float valorSalario = horasTrabalhadas * valorHora + numeroFilhos * valorSalarioFamilia;

    printf("NUMERO DO FUNCIONARIO = %i\n", numeroFuncionario);
    printf("SALARIO TOTAL = %.2f\n", valorSalario);
}
