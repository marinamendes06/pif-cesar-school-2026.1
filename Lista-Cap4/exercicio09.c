#include <stdio.h>

int main() {
    float trab, sem, exame, media;

    printf("Nota do trabalho: ");
    scanf("%f", &trab);

    printf("Nota da avaliacao semestral: ");
    scanf("%f", &sem);

    printf("Nota do exame final: ");
    scanf("%f", &exame);

    media = (trab * 2 + sem * 3 + exame * 5) / 10;

    printf("Media ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Reprovado\n");
    } else if (media < 5.0) {
        printf("Em recuperacao\n");
    } else {
        printf("Aprovado\n");
    }

    return 0;
}
