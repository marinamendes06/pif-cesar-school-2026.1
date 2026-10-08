#include <stdio.h>

#define SENHA_SECRETA 2026
#define MAX_TENTATIVAS 3

int main() {
    int senha_digitada;
    int acesso_concedido = 0;

    for (int tentativa = 1; tentativa <= MAX_TENTATIVAS; tentativa++) {
        printf("Digite a senha numérica (%dª tentativa): ", tentativa);
    
        if (scanf("%d", &senha_digitada) != 1) {
            printf("Entrada inválida! Insira apenas números.\n");
            while (getchar() != '\n');
            continue;
        }

        if (senha_digitada == SENHA_SECRETA) {
            printf("\nAcesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativa);
            acesso_concedido = 1;
            break; 
        } else {
            if (tentativa < MAX_TENTATIVAS) {
                printf("Senha incorreta. Tente novamente.\n\n");
            }
        }
    }

    if (!acesso_concedido) {
        printf("\nConta Bloqueada por Segurança!\n");
    }

    return 0;
}
