#include <stdio.h>

int main() {
    float raio, area, circunferencia;
    float PI = 3.141593;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    printf("\n--- Resultados ---\n");
    printf("Area: %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);

    return 0;
}
