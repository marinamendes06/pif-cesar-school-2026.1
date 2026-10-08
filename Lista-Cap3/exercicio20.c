#include <stdio.h>

int main() {
    printf("===============================\n");
    printf(" Decimal | Hexadecimal | Caractere \n");
    printf("===============================\n");

    for (int i = 32; i <= 126; i++) {
        printf("%7d | %11X | %9c\n", i, i, (char)i);
    }

    printf("===============================\n");

    return 0;
}
