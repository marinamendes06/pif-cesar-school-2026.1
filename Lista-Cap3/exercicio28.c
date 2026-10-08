#include <stdio.h>

int main() {
    int opcao;
    float salario, novo_salario, imposto;

    do {
        printf("\n========================================\n");
        printf("      SISTEMA DE FOLHA DE PAGAMENTO     \n");
        printf("========================================\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("========================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- REAJUSTE SALARIAL ---\n");
                printf("Digite o salario atual (R$): ");
                scanf("%f", &salario);

                if (salario <= 0) {
                    printf("Erro: O salario deve ser maior que zero.\n");
                } else {
                    if (salario <= 2000.00) {
                        novo_salario = salario * 1.15;
                        printf("Percentual de aumento: 15%%\n");
                    } else {
                        novo_salario = salario * 1.10;
                        printf("Percentual de aumento: 10%%\n");
                    }
                    printf("Valor do aumento: R$ %.2f\n", novo_salario - salario);
                    printf("Novo salario reajustado: R$ %.2f\n", novo_salario);
                }
                break;

            case 2:
                printf("\n--- RETENCAO DE IMPOSTO DE RENDA ---\n");
                printf("Digite o salario bruto (R$): ");
                scanf("%f", &salario);

                if (salario <= 0) {
                    printf("Erro: O salario deve ser maior que zero.\n");
                } else {
                    if (salario <= 3000.00) {
                        imposto = salario * 0.08;
                        printf("Aliquota de IR: 8%%\n");
                    } else {
                        imposto = salario * 0.15;
                        printf("Aliquota de IR: 15%%\n");
                    }
                    printf("Valor descontado de IR: R$ %.2f\n", imposto);
                    printf("Salario liquido: R$ %.2f\n", salario - imposto);
                }
                break;

            case 3:
                printf("\nEncerrando o programa... Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida! Por favor, escolha uma opcao entre 1 e 3.\n");
                break;
        }

    } while (opcao != 3);

    return 0;
}
