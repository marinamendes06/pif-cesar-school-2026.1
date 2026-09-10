#include <stdio.h>

int main() {
    float salario_base, gratificacao, imposto, salario_liquido;
    float PERCENTUAL_GRATIFICACAO = 0.05f;
    float PERCENTUAL_IMPOSTO = 0.07f;

    printf("Digite o valor do salario-base: R$ ");
    scanf("%f", &salario_base);

    gratificacao = salario_base * PERCENTUAL_GRATIFICACAO;
    imposto = salario_base * PERCENTUAL_IMPOSTO;
    
    salario_liquido = salario_base + gratificacao - imposto;

    printf("\n--- Demonstrativo Salarial ---\n");
    printf("Salario-base:    R$ %.2f\n", salario_base);
    printf("Gratificacao (+5%%): R$ %.2f\n", gratificacao);
    printf("Imposto (-7%%):      R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
