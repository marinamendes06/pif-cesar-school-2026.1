#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    if (num >= 0) {
        printf("Raiz quadrada: %.2f\n", sqrt(num));
    } else {
        printf("Quadrado do numero: %.2f\n", num * num);
    }

    return 0;
}
