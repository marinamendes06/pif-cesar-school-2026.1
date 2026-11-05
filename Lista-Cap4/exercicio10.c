#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O numero e PAR\n");
    } else {
        printf("O numero e IMPAR\n");
    }

    if (num > 0) {
        printf("O numero e POSITIVO\n");
    } else if (num < 0) {
        printf("O numero e NEGATIVO\n");
    } else {
        printf("O numero e ZERO\n");
    }

    return 0;
}
