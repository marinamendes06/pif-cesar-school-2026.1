#include <stdio.h>

int main() {
    char caractere;
    
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("\nCaractere digitado: '%c'\n", caractere);
    printf("Codigo decimal na Tabela ASCII: %d\n", caractere);

    return 0;
}
