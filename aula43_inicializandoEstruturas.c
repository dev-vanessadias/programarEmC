#include <stdio.h>

int main(void) {

    struct horario {
        int horas;
        int minutos;
        int segundos;
    }agora = {10, 20, 30}; //definiu a variavel e atribuiu
                                                 //a estrutura em uma mesma linha.

    printf("Na main - proxima:  %i:%i:%i \n", agora.horas,
                                              agora.minutos,
                                              agora.segundos);

    return 0;
}