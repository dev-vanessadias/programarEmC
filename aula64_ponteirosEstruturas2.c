#include <stdio.h>

int main(void) {

    struct horario {
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    depois = &agora;

    // primeira forma opciobnal de declarar ponteiro
    //(*depois).hora = 20;
    //(*depois).minuto = 30;
    //(*depois).segundo = 15;

    // segunda forma opciobnal de declarar ponteiro
    depois->hora = 20;
    depois->minuto = 30;
    depois->segundo = 16;

    printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo);

    getchar();
    return 0;
}