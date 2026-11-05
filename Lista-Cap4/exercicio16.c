#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);

    printf("Digite os litros consumidos: ");
    scanf("%f", &litros);

    if (litros > 0) {
        consumo = distancia / litros;

        printf("Consumo: %.2f km/l\n", consumo);

        if (consumo < 8.0) {
            printf("Venda o carro!\n");
        } else if (consumo <= 14.0) {
            printf("Economico!\n");
        } else {
            printf("Super economico!\n");
        }
    } else {
        printf("Erro: quantidade de litros invalida!\n");
    }

    return 0;
}
