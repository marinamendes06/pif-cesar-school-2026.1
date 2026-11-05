#include <stdio.h>
#include <math.h>

int main() {
    float a, b, resultado;
    char op;

    printf("Digite a operacao (+, -, *, /, ^): ");
    scanf(" %c", &op);

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+':
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '-':
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '/':
            if (b != 0) {
                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;

        case '^':
            resultado = pow(a, b);
            printf("Resultado: %.2f\n", resultado);
            break;

        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}
