#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main() {
    double custoPorMetro = 100;
    double areaTotal, areaBase, areaLateral, valor;
    int raio, altura;

    scanf("%d", &raio);
    scanf("%d", &altura);

    areaBase = PI * pow(raio, 2) * 2;
    areaLateral = 2 * PI * raio * altura;
    areaTotal = areaBase + areaLateral;
    valor = areaTotal * custoPorMetro;

    printf("O VALOR DO CUSTO E = %0.2f\n", valor);
    return 0;
}