#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Exibe o mesmo valor em decimal, hexadecimal, octal e caractere ASCII
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n", numero, numero, numero, numero);

    return 0;
}
