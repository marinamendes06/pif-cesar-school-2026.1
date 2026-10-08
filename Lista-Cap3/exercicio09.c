#include <stdio.h>

int main() {
    float valor, soma = 0.0;
    int quantidade = 0;

    printf("Digite valores reais positivos (ou um valor negativo para encerrar):\n");

    while (1) {
        printf("Digite um valor: ");
        scanf("%f", &valor);

        if (valor < 0) {
            break; // Sentinela de parada: ignora o negativo e sai do laço
        }

        soma += valor;
        quantidade++;
    }

    printf("\n--- RESULTADO ---\n");
    printf("Quantidade de valores validos: %d\n", quantidade);

    if (quantidade > 0) {
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhum valor valido foi digitado para calcular soma ou media.\n");
    }

    return 0;
}
