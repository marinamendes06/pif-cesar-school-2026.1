#include <stdio.h>

int main() {
    float n1, n2, n3, n4;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    // a) Media Aritmetica Simples
    float media_simples = (n1 + n2 + n3 + n4) / 4.0;

    // b) Media Ponderada (Pesos: n1=1, n2=1, n3=2, n4=2 | Soma dos pesos = 6)
    float media_ponderada = (n1 * 1 + n2 * 1 + n3 * 2 + n4 * 2) / 6.0;

    printf("\n--- Resultados ---\n");
    printf("a) Media Aritmetica Simples: %.2f\n", media_simples);
    printf("b) Media Ponderada: %.2f\n", media_ponderada);

    return 0;
}
