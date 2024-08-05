#include <stdio.h>


struct horario {
    int horas;
    int minutos;
    int segundos;
};

int main(void) {

    struct horario teste(struct horario x); // chamada da funcao 1

    struct horario agora;
    agora.horas = 10;
    agora.minutos = 42;
    agora.segundos = 58;

    struct horario proxima;
    proxima = teste(agora);

    printf("Na main - proxima:  %i:%i:%i", proxima.horas,
                                           proxima.minutos,
                                           proxima.segundos);

    return 0;
}
struct horario teste(struct horario x) { // funcao 1

    printf("Na funcao 1 - teste: %i:%i:%i", x.horas,
                                            x.minutos,
                                            x.segundos);

    x.horas = 100;
    x.minutos = 100;
    x.segundos = 100;
    printf("\n");

    return x;
}