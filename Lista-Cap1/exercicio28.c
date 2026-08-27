#include <stdio.h>

int main() {
    int num1, num2, num3;
    double media;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &num3);

    media = (double)(num1 + num2 + num3) / 3.0;

    printf("A media aritmetica dos valores e: %.2lf\n", media);

    return 0;
}
