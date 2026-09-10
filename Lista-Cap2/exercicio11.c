#include <stdio.h>

// Definicao de Pi como constante
#define PI 3.141593

int main() {
    double graus, radianos;

    printf("Digite o valor do angulo em graus: ");
    scanf("%lf", &graus);

    // Calculo da conversao para radianos
    radianos = graus * (PI / 180.0);

    printf("\n--- Conversao de Angulo ---\n");
    printf("Angulo em graus: %.2f deg\n", graus);
    printf("Angulo em radianos: %.4f rad\n", radianos);

    return 0;
}
