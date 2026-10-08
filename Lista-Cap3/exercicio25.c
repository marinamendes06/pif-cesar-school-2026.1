#include <stdio.h>

int main() {
    int N;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, forneca um numero inteiro positivo.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }

    printf("\nO numero %d possui %d divisor(es).\n", N, divisores);

    if (N > 1 && divisores == 2) {
        printf("Resultado: %d EH um numero primo.\n", N);
    } else {
        printf("Resultado: %d NAO EH um numero primo.\n", N);
    }

    return 0;
}
