#include <stdio.h>

int main() {
    int idadeEmDias, anos, meses, dias;

    scanf("%i", &idadeEmDias);

    anos = idadeEmDias / 365;
    int quociente = idadeEmDias % 365;
    meses = quociente / 30;
    dias = quociente % 30;

    printf("%i ANOS %i MESES %i DIAS\n", anos, meses, dias);

    return 0;
}