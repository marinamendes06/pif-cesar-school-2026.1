#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    // Esse espaco antes do %c ignora o \n que sobrou
    scanf(" %c", &letra); 

    printf("Voce digitou: %c\n", letra);

    return 0;
}
