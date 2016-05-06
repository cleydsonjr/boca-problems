#include <stdio.h>

int main() {
    int tempoEmsegundos, horas, minutos, segundos;

    scanf("%i", &tempoEmsegundos);

    horas = tempoEmsegundos / 3600;
    int quociente = tempoEmsegundos % 3600;
    minutos = quociente / 60;
    segundos = quociente % 60;

    printf("%i HORAS %i MINUTOS %i SEGUNDOS\n", horas, minutos, segundos);

    return 0;
}