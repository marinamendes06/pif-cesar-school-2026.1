#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num = 2026;

    printf("O ano que estamos é: %d", num);

    return 0;
}
