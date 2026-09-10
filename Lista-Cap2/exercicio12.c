#include <stdio.h>

int main() {
    int numero, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Copiamos o valor para antecessor e aplicamos o decremento prefixado
    antecessor = numero;
    --antecessor; // Decrementa 1 unidade do valor original

    // Copiamos o valor para sucessor e aplicamos o incremento prefixado
    sucessor = numero;
    ++sucessor; // Incrementa 1 unidade do valor original

    printf("\n--- Resultados ---\n");
    printf("Antecessor: %d\n", antecessor);
    printf("Valor digitado: %d\n", numero);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}
