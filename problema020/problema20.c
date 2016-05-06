#include <stdio.h>

int main() {
    int valorTotal, cem, cinquenta, dez, um;

    scanf("%i", &valorTotal);

    cem = valorTotal / 100;
    int quociente1 = valorTotal % 100;
    cinquenta = quociente1 / 50;
    int quociente2 = quociente1 % 50;
    dez = quociente2 / 10;
    um = quociente2 % 10;

    printf("NOTAS DE 100 = %i\n", cem);
    printf("NOTAS DE 50 = %i\n", cinquenta);
    printf("NOTAS DE 10 = %i\n", dez);
    printf("NOTAS DE 1 = %i\n", um);

    return 0;
}