#include <stdio.h>

int main(void) {

    int vetor[3] = {1, 2, 3};
    //int *ponteiro = vetor; // o ponteiro vai apontar o endereco de memoria e nao precisa colocar o simbol &
    int *ponteiro = &vetor[1]; // nessa declaracao opcional o ponteiro é forcado a localizar o numero do vetor

    printf("%i", *ponteiro);


    getchar();
    return 0;
}