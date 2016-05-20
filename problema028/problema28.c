#include <stdio.h>
#include <math.h>

int main() {
    float massaAviao, aceleracao, tempo;

    scanf("%f", &massaAviao);
    scanf("%f", &aceleracao);
    scanf("%f", &tempo);

    float velocidade = aceleracao * tempo;
    float velocidadeKm = velocidade * 3.6f;
    float tempo2 = (float) pow(tempo, 2);
    float comprimento = (aceleracao * tempo2) / 2;

    float velocidade2 = (float) pow(velocidade, 2);
    float massaKg = massaAviao * 1000;
    float trabalho = (massaKg * velocidade2) / 2;

    printf("%.2f\n", velocidadeKm);
    printf("%.2f\n", comprimento);
    printf("%.2f\n", trabalho);
}