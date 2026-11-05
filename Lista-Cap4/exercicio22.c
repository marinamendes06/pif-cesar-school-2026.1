#include <stdio.h>

int main() {
    float valor, imposto, final;
    int estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    printf("1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");

    printf("Digite o codigo do estado: ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            imposto = 0.07;
            break;

        case 2:
            imposto = 0.12;
            break;

        case 3:
            imposto = 0.15;
            break;

        case 4:
            imposto = 0.08;
            break;

        default:
            printf("Erro: Estado invalido!\n");
            return 0;
    }

    final = valor + (valor * imposto);

    printf("Preco final com imposto: R$ %.2f\n", final);

    return 0;
}
