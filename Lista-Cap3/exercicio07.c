#include <stdio.h>

// Versão 1: Utilizando o laço for
void versaoFor() {
    printf("--- Versao FOR ---\n");
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
}

// Versão 2: Utilizando a estrutura while
void versaoWhile() {
    printf("--- Versao WHILE ---\n");
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

// Versão 3: Utilizando a estrutura do-while
void versaoDoWhile() {
    printf("--- Versao DO-WHILE ---\n");
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
}

int main() {
    versaoFor();
    versaoWhile();
    versaoDoWhile();
    return 0;
}

/*
RESPOSTA:
A estrutura mais adequada para este caso é o laço 'for'.

Por quê?
Porque o número de iterações é previamente conhecido (sabemos exatamente que o laço deve 
rodar de 0 até 100). O 'for' permite agrupar a inicialização da variável, a condição de parada 
e o incremento em uma única linha no cabeçalho do laço, tornando o código mais conciso, 
legível e menos propenso a erros (como esquecer de incrementar a variável de controle).
*/
