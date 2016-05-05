#include <stdio.h>
#include <math.h>

/**
 * Resolução do problema1
 * Exercício 7
 * Aluno: Cleydson Figueiredo
 */
int main() {
    double l1;
    double l2;
    double l3;

    scanf("%lf", &l1);
    scanf("%lf", &l2);
    scanf("%lf", &l3);
    double t = (l1 + l2 + l3) / 2;
    double x = t * (t - l1) * (t - l2) * (t - l3);
    double a = sqrt(x);

    printf("A AREA DO TRIANGULO E = %0.2f\n", a);
    return 0;
}