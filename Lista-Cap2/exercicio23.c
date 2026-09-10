#include <stdio.h>

int main() {
    int h_inicio, m_inicio, s_inicio;
    int duracao_segundos;
    int total_segundos_inicio, total_segundos_fim;
    int h_fim, m_fim, s_fim;

    printf("Digite o horario de inicio:\n");
    printf("Horas (0-23): ");
    scanf("%d", &h_inicio);
    printf("Minutos (0-59): ");
    scanf("%d", &m_inicio);
    printf("Segundos (0-59): ");
    scanf("%d", &s_inicio);

    printf("\nDigite a duracao do experimento (em segundos): ");
    scanf("%d", &duracao_segundos);

    total_segundos_inicio = (h_inicio * 3600) + (m_inicio * 60) + s_inicio;

    total_segundos_fim = total_segundos_inicio + duracao_segundos;

    total_segundos_fim = total_segundos_fim % 86400;

    h_fim = total_segundos_fim / 3600;     
    m_fim = (total_segundos_fim % 3600) / 60;     
    s_fim = total_segundos_fim % 60;          
    
    printf("\nHorario de termino do experimento: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);

    return 0;
}
