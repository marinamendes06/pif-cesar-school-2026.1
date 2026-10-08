#include <stdio.h>

int main() {
    int NUM;
    int encontrou = 0;

    printf("Digite um número inteiro positivo (NUM): ");
    if (scanf("%d", &NUM) != 1 || NUM <= 0) {
        printf("Entrada inválida. Por favor, insira um número inteiro positivo.\n");
        return 1;
    }

    printf("Múltiplos de 3 e 5 no intervalo de 1 a %d:\n", NUM);

    for (int i = 1; i <= NUM; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum número no intervalo de 1 a %d atende à condição.\n", NUM);
    }

    return 0;
}
