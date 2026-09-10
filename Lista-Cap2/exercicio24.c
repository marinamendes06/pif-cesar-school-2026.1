#include <stdio.h>

int main() {
    float vel_kmh, vel_ms;
    float conversao = 3.6f;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &vel_kmh);

    vel_ms = vel_kmh / conversao;
    
    printf("\n--- Resultado ---\n");
    printf("Velocidade: %.2f km/h = %.2f m/s\n", vel_kmh, vel_ms);

    return 0;
}
