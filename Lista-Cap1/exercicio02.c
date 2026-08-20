#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float num = 3.14159f;

    printf("O número de π é: %.3f\n", num);

    return 0;
}
