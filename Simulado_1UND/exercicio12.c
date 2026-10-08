#include <stdio.h>
#include <stdlib.h>

int main() {
    int dias;
    double salario_bruto, gratificacao, imposto, salario_liquido;
    const double VALOR_DIA = 45.00;

    printf("Digite o numero de dias trabalhados pelo tecnico: ");
    scanf("%d", &dias);

    salario_bruto = dias * VALOR_DIA;
    gratificacao = salario_bruto * 0.05; // 5% de gratificação
    imposto = salario_bruto * 0.08;      // 8% de imposto de renda
    salario_liquido = salario_bruto + gratificacao - imposto;

   
    printf("Dias Trabalhados   : %d\n", dias);
    printf("Salario Bruto      : R$ %.2f\n", salario_bruto);
    printf("Gratificacao (+5%%) : R$ %.2f\n", gratificacao);
    printf("Imposto IR (-8%%)   : R$ %.2f\n", imposto);
    printf("Valor Liquido      : R$ %.2f\n", salario_liquido);
   

    return 0;
}
