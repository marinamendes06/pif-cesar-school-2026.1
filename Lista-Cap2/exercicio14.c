#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Digite o lado 'a' do triangulo: ");
    scanf("%lf", &a);

    printf("Digite o lado 'b' do triangulo: ");
    scanf("%lf", &b);

    printf("Digite o lado 'c' do triangulo: ");
    scanf("%lf", &c);

    // Calculo do semi-perimetro
    double p = (a + b + c) / 2.0;

    // Calculo da area usando a Formula de Heron
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("\n--- Resultado ---\n");
    printf("Semi-perimetro (p): %.2f\n", p);
    printf("Area do triangulo: %.2f\n", area);

    return 0;
}
