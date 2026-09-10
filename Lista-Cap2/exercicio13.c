#include <stdio.h>

int main() {
    double lado, base, altura;

    printf("--- Calculo de Areas Geometricas ---\n\n");

    // a) Area do quadrado
    printf("Digite o lado do quadrado (L): ");
    scanf("%lf", &lado);
    double area_quadrado = lado * lado;

    // b) e c) Base e Altura para Retangulo e Triangulo
    printf("Digite a base (B): ");
    scanf("%lf", &base);
    printf("Digite a altura (H): ");
    scanf("%lf", &altura);

    double area_retangulo = base * altura;
    double area_triangulo = (base * altura) / 2.0;

    // Exibicao dos Resultados
    printf("\n--- Resultados ---\n");
    printf("a) Area do Quadrado (L = %.2f): %.2f\n", lado, area_quadrado);
    printf("b) Area do Retangulo (B = %.2f, H = %.2f): %.2f\n", base, altura, area_retangulo);
    printf("c) Area do Triangulo Retangulo (B = %.2f, H = %.2f): %.2f\n", base, altura, area_triangulo);

    return 0;
}
