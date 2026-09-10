#include <stdio.h>

int main() {
    float horas_normais, horas_extras;
    float salario_bruto, excedente, imposto, salario_liquido;
    float TAXA_HORA_NORMAL = 10.00f;
    float TAXA_HORA_EXTRA = 15.00f;
    float LIMITE_ISENCAO = 12000.00f;
    float ALIQUOTA_IMPOSTO = 0.10f;

    
    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);

    salario_bruto = (horas_normais * TAXA_HORA_NORMAL) + (horas_extras * TAXA_HORA_EXTRA);

    excedente = (salario_bruto > LIMITE_ISENCAO) ? (salario_bruto - LIMITE_ISENCAO) : 0.0f;
    imposto = excedente * ALIQUOTA_IMPOSTO;

    salario_liquido = salario_bruto - imposto;

    printf("\n--- Demonstrativo Anual ---\n");
    printf("Salario Anual Bruto: R$ %.2f\n", salario_bruto);
    printf("Faixa Isenta:        R$ %.2f\n", LIMITE_ISENCAO);
    printf("Valor Excedente:     R$ %.2f\n", excedente);
    printf("Imposto Devido (10%%): R$ %.2f\n", imposto);
    printf("Salario Anual Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
