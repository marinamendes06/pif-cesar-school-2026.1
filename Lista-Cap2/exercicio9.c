#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    
    // Casting (float) para garantir a divisao real sem truncamento
    // NOTA SOBRE DIVISAO POR ZERO:
    // Para evitar a divisao por zero matematicamente/em codigo neste capitulo,
    // utilizar-se-ia uma estrutura condicional (if/else) para verificar
    // se num2 == 0 antes de realizar o calculo da divisao.
    float divisao = (float) num1 / num2;

    printf("\n--- Resultados ---\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao real: %.2f\n", divisao);

    return 0;
}
