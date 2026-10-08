#include <stdio.h>

int main() {
    int L;
  
    do {
        printf("Digite a dimensao do lado do quadrado (entre 3 e 20): ");
        scanf("%d", &L);

        if (L < 3 || L > 20) {
            printf("Valor invalido! O tamanho deve ser entre 3 e 20.\n");
        }
    } while (L < 3 || L > 20);

    printf("\n");
  
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < L; j++) {
            if (i == 0 || i == L - 1 || j == 0 || j == L - 1) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
