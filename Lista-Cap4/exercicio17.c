#include <stdio.h>

int main() {
    float valor, final, parcela, comissao;
    int opcao;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    printf("1 - A vista com 10%% de desconto\n");
    printf("2 - Parcelado em 3x sem juros\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        final = valor * 0.90;
        comissao = final * 0.05;

        printf("Valor final: R$ %.2f\n", final);
        printf("Comissao: R$ %.2f\n", comissao);

    } else if (opcao == 2) {
        parcela = valor / 3;
        comissao = valor * 0.05;

        printf("Valor total: R$ %.2f\n", valor);
        printf("Valor de cada parcela: R$ %.2f\n", parcela);
        printf("Comissao: R$ %.2f\n", comissao);

    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
