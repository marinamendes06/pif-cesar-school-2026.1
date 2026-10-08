#include <stdio.h>

int main() {
    float nota;
    float soma_notas = 0.0;
    float maior_nota = 0.0;
    float menor_nota = 10.0;
    int total_alunos = 0;

    printf("--- Sistema de Processamento de Notas ---\n");
    printf("Digite as notas dos alunos (0.0 a 10.0).\n");
    printf("Digite -1.0 para encerrar a entrada de dados.\n\n");

    while (1) {
        printf("Digite a nota do aluno %d: ", total_alunos + 1);
        
        if (scanf("%f", &nota) != 1) {
            printf("Entrada inválida! Digite um número real.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (nota == -1.0f) {
            break;
        }

        if (nota < 0.0f || nota > 10.0f) {
            printf("Nota inválida! A nota deve estar entre 0.0 e 10.0.\n\n");
            continue;
        }

        soma_notas += nota;

        if (total_alunos == 0) {
            maior_nota = nota;
            menor_nota = nota;
        } else {
            if (nota > maior_nota) {
                maior_nota = nota;
            }
            if (nota < menor_nota) {
                menor_nota = nota;
            }
        }

        total_alunos++;
    }
  
    printf("\n================ RESUMO DA TURMA ================\n");
    if (total_alunos > 0) {
        float media_geral = soma_notas / total_alunos;

        printf("a) Total de alunos avaliados : %d\n", total_alunos);
        printf("b) Maior nota da turma       : %.2f\n", maior_nota);
        printf("c) Menor nota da turma       : %.2f\n", menor_nota);
        printf("d) Média geral da turma      : %.2f\n", media_geral);
    } else {
        printf("Nenhum aluno foi cadastrado.\n");
    }
    printf("=================================================\n");

    return 0;
}
