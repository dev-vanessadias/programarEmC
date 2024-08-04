#include <stdio.h>

int main(void) {

    struct horario {
        int horas;
        int minutos;
        int segundos;
        float teste;
        char letra;
    };

    struct horario agora;
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    struct horario depois;
    depois.horas = agora.horas + 3;
    depois.minutos = agora.minutos + 5;
    depois.segundos = agora.segundos + 10;
    depois.teste = 50.55 /123;
    depois.letra = 'a';

    printf("Agora é %i:%i:%i", agora.horas, agora.minutos, agora.segundos);
    printf("\n");
    printf("Depois é %i:%i:%i", depois.horas, depois.minutos, depois.segundos);
    printf("\n");
    printf("Teste é %f", depois.teste);
    printf("\n");
    printf("Letra é: %c", depois.letra);
}