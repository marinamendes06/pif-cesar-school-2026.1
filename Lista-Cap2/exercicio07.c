#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    // O scanf ignora as barras e armazena apenas os valores numericos
    scanf("%d/%d/%d", &dia, &mes, &ano);

    // O %02d garante 2 digitos para dia e mes, e o %04d garante 4 digitos para o ano
    printf("Data invertida: %04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}
