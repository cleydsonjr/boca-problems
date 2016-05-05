#include <stdio.h>
#include <math.h>

/**
 * Resolução do problema1
 * Exercício 9
 * Aluno: Cleydson Figueiredo
 */
int main() {
    int x1, x2, y1, y2;

    scanf("%i", &x1);
    scanf("%i", &y1);
    scanf("%i", &x2);
    scanf("%i", &y2);

    double e1 = pow(x2 - x1, 2);
    double e2 = pow(y2 - y1, 2);

    double d = sqrt(e1 + e2);

    printf("A DISTANCIA ENTRE A e B = %0.2f\n", d);

    return 0;
}