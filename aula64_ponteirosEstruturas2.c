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

    int somatorio = 100; //aula 64 inicia aqui

    struct horario antes;

    antes.hora = somatorio + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto + depois->segundo;

    printf("agora: %i:%i:%i \n", agora.hora, agora.minuto, agora.segundo);
    printf("antes: %i:%i:%i \n", antes.hora, antes.minuto, antes.segundo);

    getchar();
    return 0;
}