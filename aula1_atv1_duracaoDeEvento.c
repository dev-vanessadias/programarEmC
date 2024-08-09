#include <stdio.h>

int main() {
    int tempoEmSegundos, horas, minutos, segundos;

    // a. Receber do usuário o tempo em segundos
    printf("Digite o tempo de duração do evento em segundos: ");
    scanf("%d", &tempoEmSegundos);

    // b. Calcular o tempo equivalente em horas, minutos e segundos
    horas = tempoEmSegundos / 3600; // 1 hora tem 3600 segundos
    minutos = (tempoEmSegundos % 3600) / 60; // O restante dividido por 60 dá os minutos
    segundos = tempoEmSegundos % 60; // O restante são os segundos

    // Mostrar o resultado
    printf("O tempo equivalente é: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
