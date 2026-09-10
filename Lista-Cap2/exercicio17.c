#include <stdio.h>

int main() {
    float raio, area, circunferencia;
    float PI = 3.141593;

    // Leitura do raio
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    // Calculos
    area = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    // Exibicao dos resultados (com 4 casas decimais para precisao)
    printf("\n--- Resultados ---\n");
    printf("Area: %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);

    return 0;
}
