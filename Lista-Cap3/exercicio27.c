#include <stdio.h>

int main() {
    int valor;

    do {
        printf("Digite o valor do saque (em R$): ");
        scanf("%d", &valor);

        if (valor <= 0 || valor == 1 || valor == 3) {
            printf("Valor invalido! Nao eh possivel sacar o valor fornecido com as cedulas disponíveis.\n\n");
        }
    } while (valor <= 0 || valor == 1 || valor == 3);

    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int total_cedulas = 6;

    printf("\nCedulas entregues para o valor de R$ %d:\n", valor);

    for (int i = 0; i < total_cedulas; i++) {
        int qtd = 0;
        int nota = cedulas[i];

        while (valor >= nota) {
            if ((valor - nota) == 1 || (valor - nota) == 3) {
                break;
            }
            valor -= nota;
            qtd++;
        }

        if (qtd > 0) {
            printf("%d cedula(s) de R$ %d\n", qtd, nota);
        }
    }

    return 0;
}
