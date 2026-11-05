#include <stdio.h>

int main() {
    int opcao;
    float temp, resultado;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");

    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    switch (opcao) {
        case 1:
            resultado = temp * 1.8 + 32;
            printf("Fahrenheit: %.2f\n", resultado);
            break;

        case 2:
            resultado = temp + 273.15;
            printf("Kelvin: %.2f\n", resultado);
            break;

        case 3:
            resultado = (temp - 32) / 1.8;
            printf("Celsius: %.2f\n", resultado);
            break;

        case 4:
            resultado = temp - 273.15;
            printf("Celsius: %.2f\n", resultado);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
