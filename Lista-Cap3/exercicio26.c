#include <stdio.h>

int main() {
    int A, B;
    long long int soma_primos = 0;
    int contador_primos = 0;

    do {
        printf("Digite o valor de A (inteiro positivo): ");
        scanf("%d", &A);

        printf("Digite o valor de B (inteiro positivo e maior que A): ");
        scanf("%d", &B);

        if (A <= 0 || B <= 0 || A >= B) {
            printf("\nEntrada invalida! Certifique-se de que A e B sejam positivos e A < B.\n\n");
        }
    } while (A <= 0 || B <= 0 || A >= B);

    printf("\nNumeros primos no intervalo [%d, %d]:\n", A, B);

    for (int numero = A; numero <= B; numero++) {
      
        if (numero <= 1) {
            continue;
        }

        int e_primo = 1; 
      
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                e_primo = 0;
                break;
            }
        }

        if (e_primo) {
            printf("%d ", numero);
            soma_primos += numero;
            contador_primos++;
        }
    }

    if (contador_primos == 0) {
        printf("Nenhum numero primo foi encontrado neste intervalo.");
    }

    printf("\n\nSoma de todos os numeros primos encontrados: %lld\n", soma_primos);

    return 0;
}
