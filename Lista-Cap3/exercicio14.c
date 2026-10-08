#include <stdio.h>

int main() {
    long long soma_quadrados = 0;

    printf("--- Listagem dos Numeros e Seus Quadrados ---\n\n");

    for (int i = 1; i <= 100; i++) {
        long long quadrado = (long long)i * i;
        printf("%d -> %lld\n", i, quadrado);
        soma_quadrados += quadrado;
    }

    printf("\n---------------------------------------------\n");
    printf("Soma total de todos os quadrados: %lld\n", soma_quadrados);
    printf("---------------------------------------------\n");

    return 0;
}
