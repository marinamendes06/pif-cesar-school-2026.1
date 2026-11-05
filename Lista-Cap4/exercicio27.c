#include <stdio.h>

int main() {
    int horas;
    float valor;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Tempo invalido!\n");
        return 0;
    }

    if (horas <= 2) {
        valor = horas * 2.00;
    } else if (horas <= 4) {
        valor = 4.00 + (horas - 2) * 2.50;
    } else {
        valor = 9.00 + (horas - 4) * 3.00;
    }

    printf("Tempo total: %d horas\n", horas);
    printf("Valor final: R$ %.2f\n", valor);

    return 0;
}
