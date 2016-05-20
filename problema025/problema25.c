#include <stdio.h>

#define PERCENTUAL_PROMOCAO 0.22f
#define OCUPACAO_MEDIA 0.4f
#define OCUPACAO_PROMOCAO 0.7f
#define NUMERO_APARTAMENTOS 42

int main() {
    float valorDiariaNormal;
    int diasFds = 8;

    scanf("%f", &valorDiariaNormal);

    float valorDiariaPromocao = valorDiariaNormal * PERCENTUAL_PROMOCAO;

    float ocupacaoSemPromocao = OCUPACAO_MEDIA * NUMERO_APARTAMENTOS;
    float valorMedioSemPromocao = diasFds * ocupacaoSemPromocao * valorDiariaNormal;

    float ocupacaoComPromocao = OCUPACAO_PROMOCAO * NUMERO_APARTAMENTOS;
    float valorMedioComPromocao = diasFds * ocupacaoComPromocao * valorDiariaPromocao;

    float diferenca = valorMedioComPromocao - valorMedioSemPromocao;

    printf("O VALOR DA DIARIA NO PERIODO DA PROMOCAO = %.2f\n", valorDiariaPromocao);
    printf("O VALOR MEDIO ARRECADADO SEM A PROMOCAO = %.2f\n", valorMedioSemPromocao);
    printf("O VALOR MEDIO ARRECADADO COM A PROMOCAO = %.2f\n", valorMedioComPromocao);
    printf("LUCRO OU PREJUIZO = %.2f\n", diferenca);
}