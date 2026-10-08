#include <stdio.h>
#include <stdlib.h>

int main() {
    double nota;

    do {
        printf("Digite uma nota valida (entre 0.0 e 10.0): ");
        scanf("%lf", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: Nota invalida! Tente novamente.\n\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("\nNota validada com sucesso: %.2f\n", nota);

    return 0;
}
