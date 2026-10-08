#include <stdio.h>

int main() {
    int N;
    long long a = 1, b = 1, proximo;

    printf("Digite o numero do termo desejado: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Numero invalido.\n");
        return 0;
    }

    printf("Termos da sequencia: ");

    if (N >= 1)
        printf("%lld ", a);

    if (N >= 2)
        printf("%lld ", b);

    for (int i = 3; i <= N; i++) {
        proximo = a + b;
        printf("%lld ", proximo);

        a = b;
        b = proximo;
    }

    if (N == 1)
        printf("\nO %d-esimo termo e: %lld\n", N, a);
    else
        printf("\nO %d-esimo termo e: %lld\n", N, b);

    return 0;
}
