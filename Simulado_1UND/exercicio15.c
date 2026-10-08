#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, j;
    int numero = 1;

    printf("Digite o numero de linhas (N) para o Triangulo de Floyd: ");
    scanf("%d", &N);

    printf("\n");
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}
