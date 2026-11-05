#include <stdio.h>

int main() {
    float salario, aumento, novo;
    int cargo;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    printf("1 - Tecnico\n");
    printf("2 - Gerente\n");
    printf("3 - Demais cargos\n");

    printf("Digite o codigo do cargo: ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            if (salario <= 3000) {
                aumento = salario * 0.15;
            } else {
                aumento = salario * 0.10;
            }
            break;

        case 2:
            if (salario <= 5000) {
                aumento = salario * 0.10;
            } else {
                aumento = salario * 0.05;
            }
            break;

        case 3:
            aumento = salario * 0.03;
            break;

        default:
            printf("Codigo invalido!\n");
            return 0;
    }

    novo = salario + aumento;

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo);

    return 0;
}
