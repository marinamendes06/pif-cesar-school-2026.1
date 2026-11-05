#include <stdio.h>

int main() {
    int valor, pago, troco;

    printf("Digite o valor da compra: R$ ");
    scanf("%d", &valor);

    printf("Digite o valor pago: R$ ");
    scanf("%d", &pago);

    if (pago < valor) {
        printf("Erro: valor insuficiente!\n");
        return 0;
    }

    troco = pago - valor;

    printf("Troco: R$ %d\n", troco);

    printf("Cedulas de 100: %d\n", troco / 100);
    troco = troco % 100;

    printf("Cedulas de 50: %d\n", troco / 50);
    troco = troco % 50;

    printf("Cedulas de 20: %d\n", troco / 20);
    troco = troco % 20;

    printf("Cedulas de 10: %d\n", troco / 10);
    troco = troco % 10;

    printf("Cedulas de 5: %d\n", troco / 5);
    troco = troco % 5;

    printf("Cedulas de 2: %d\n", troco / 2);

    return 0;
}
