#include <stdio.h>

int main() {
    int dias_trabalhados;
    float valor_bruto, imposto_renda, valor_liquido;
    float TAXA_DIARIA = 30.00f;
    float ALIQUOTA_IR = 0.08f;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    valor_bruto = dias_trabalhados * TAXA_DIARIA;
    imposto_renda = valor_bruto * ALIQUOTA_IR;
    valor_liquido = valor_bruto - imposto_renda;

    printf("\n--- Demonstrativo de Pagamento ---\n");
    printf("Dias trabalhados: %d\n", dias_trabalhados);
    printf("Valor bruto:      R$ %.2f\n", valor_bruto);
    printf("Desconto IR (8%%): R$ %.2f\n", imposto_renda);
    printf("Valor liquido:    R$ %.2f\n", valor_liquido);

    return 0;
}
