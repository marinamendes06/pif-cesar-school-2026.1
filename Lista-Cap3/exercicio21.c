#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char letra_secreta = rand() % 26 + 'a';
    char palpite;
    int tentativas = 0;

    printf("Jogo da Adivinhacao de Letras!\n");
    printf("Tente adivinhar a letra secreta entre 'a' e 'z'.\n\n");

    do {
        printf("Digite seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < letra_secreta) {
            printf("A letra secreta vem DEPOIS de '%c' no alfabeto.\n\n", palpite);
        } else if (palpite > letra_secreta) {
            printf("A letra secreta vem ANTES de '%c' no alfabeto.\n\n", palpite);
        } else {
            printf("\nParabens! Voce acertou a letra '%c'!\n", letra_secreta);
            printf("Total de tentativas: %d\n", tentativas);
        }
    } while (palpite != letra_secreta);

    return 0;
}
