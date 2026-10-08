#include <stdio.h>

int main() {
    int N;

    do {
        printf("Digite um valor impar para N (entre 3 e 19): ");
        scanf("%d", &N);

        if (N < 3 || N > 19 || N % 2 == 0) {
            printf("Valor invalido! N deve ser um numero IMPAR entre 3 e 19.\n");
        }
    } while (N < 3 || N > 19 || N % 2 == 0);

    printf("\n");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
