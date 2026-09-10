#include <stdio.h>
#include <math.h>

int main() {
    float altura_degrau_cm;
    float altura_desejada_m;
    float altura_desejada_cm;
    int total_degraus;

    // Entrada de dados
    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);

    printf("Digite a altura que deseja alcancar (em metros): ");
    scanf("%f", &altura_desejada_m);

    // Conversao de metros para centimetros (1m = 100cm)
    altura_desejada_cm = altura_desejada_m * 100.0f;

    // Calculo do numero minimo de degraus arredondando para cima
    total_degraus = ceil(altura_desejada_cm / altura_degrau_cm);

    // Exibicao do resultado
    printf("\nNumero minimo de degraus a subir: %d\n", total_degraus);

    return 0;
}
