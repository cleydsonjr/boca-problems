#include <stdio.h>

#define batidasPorSegundo 1

int main() {
    double diasPorAno = 365.25;
    int horasPorDia = 24;
    int minutosPorHora = 60;
    int segundosPorMinuto = 60;
    int years;
    double batidas;
    scanf("%d", &years);

    batidas = diasPorAno * horasPorDia * minutosPorHora * segundosPorMinuto * years * batidasPorSegundo;
    printf("O CORACAO BATEU %0.2f VEZES\n", batidas);

    getchar();
    return 0;
}