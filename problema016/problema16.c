#include <stdio.h>

int main() {
    int anos, meses, dias, idadeEmDias;

    scanf("%i", &anos);
    scanf("%i", &meses);
    scanf("%i", &dias);

    idadeEmDias = anos * 365 + meses * 30 + dias;

    printf("O VALOR EM DIAS E = %i\n", idadeEmDias);

    return 0;
}
