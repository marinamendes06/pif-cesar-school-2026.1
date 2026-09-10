#include <stdio.h>

int main() {
    float comprimento, largura, preco_metro;
    float perimetro, metragem_total, custo_total;
    int FIOS_DE_ARAME = 3;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    printf("Digite o preco por metro do arame farpado (R$): ");
    scanf("%f", &preco_metro);

    perimetro = 2.0f * (comprimento + largura);
    
    metragem_total = perimetro * FIOS_DE_ARAME;
    
    custo_total = metragem_total * preco_metro;

    printf("\n--- Orcamento do Cercamento ---\n");
    printf("Perimetro do terreno:       %.2f metros\n", perimetro);
    printf("Total de arame necessario:  %.2f metros (%d fios)\n", metragem_total, FIOS_DE_ARAME);
    printf("Custo total do arame:       R$ %.2f\n", custo_total);

    return 0;
}
