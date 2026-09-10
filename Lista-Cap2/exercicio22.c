#include <stdio.h>

int main() {
    char letra_maiuscula, letra_minuscula;

    printf("Digite uma letra maiuscula (A-Z): ");
    scanf(" %c", &letra_maiuscula);
    
    letra_minuscula = (letra_maiuscula - 'A') + 'a';
    
    printf("\nLetra original: %c (ASCII: %d)\n", letra_maiuscula, letra_maiuscula);
    printf("Letra minuscula: %c (ASCII: %d)\n", letra_minuscula, letra_minuscula);

    return 0;
}
