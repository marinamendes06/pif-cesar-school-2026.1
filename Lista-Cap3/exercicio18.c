#include <stdio.h>

int main() {
    int numero, numero_original;
    int numero_invertido = 0;

    printf("Digite um número inteiro positivo: ");
    if (scanf("%d", &numero) != 1 || numero <= 0) {
        printf("Entrada inválida. Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    numero_original = numero;

    while (numero > 0) {
        int ultimo_digito = numero % 10;                  
        numero_invertido = (numero_invertido * 10) + ultimo_digito; 
        numero = numero / 10;                                
    }

    printf("Número original : %d\n", numero_original);
    printf("Número invertido: %d\n", numero_invertido);

    return 0;
}
