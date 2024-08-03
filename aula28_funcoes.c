#include <stdio.h>

int main(void) {

    void imprimaMensagem(void); // declarcao da funcao dentro da funcao main
    imprimaMensagem(); // chamada da funcao que esta fora de main

    }

void imprimaMensagem(void) {
    printf("teste.");
}