#include <stdio.h>

int main() {
    float raio, area, volume;
    float PI = 3.141593;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);
    
    area = 4.0f * PI * raio * raio;
    
    volume = (4.0f / 3.0f) * PI * raio * raio * raio;

    printf("\n--- Resultados ---\n");
    printf("Area da superficie: %.4f\n", area);
    printf("Volume da esfera:   %.4f\n", volume);

    return 0;
}
