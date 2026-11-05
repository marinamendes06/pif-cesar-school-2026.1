#include <stdio.h>

int main() {
    int opcao;

    printf("===== BANCO =====\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Efetuar extrato\n");
    printf("3 - Fazer transferencia\n");
    printf("4 - Falar com atendente\n");

    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Direcionando para consulta de saldo...\n");
            break;

        case 2:
            printf("Direcionando para emissao de extrato...\n");
            break;

        case 3:
            printf("Direcionando para transferencias...\n");
            break;

        case 4:
            printf("Direcionando para atendimento pessoal...\n");
            break;

        default:
            printf("Erro: Opcao invalida!\n");
    }

    return 0;
}
