#include <stdio.h>

int main() {
    char numero[3];

    scanf("%s", numero);

    char invertido[3];
    invertido[0] = numero[2];
    invertido[1] = numero[1];
    invertido[2] = numero[0];

    printf("O NUMERO INVERTIDO = %s\n", invertido);
}