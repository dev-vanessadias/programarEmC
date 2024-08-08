#include <stdio.h>

int main(void) {

    int vetor[3] = {1, 2, 3};
    //int *ponteiro = vetor; // o ponteiro vai apontar o endereco de memoria e nao precisa colocar o simbol &
    //int *ponteiro = &vetor[1]; // nessa declaracao opcional o ponteiro é forcado a localizar o numero do vetor

    int *ponteiro = &vetor[0];

    //++ponteiro; // esta adicionando mais um e pulando o endereco de memoria.

    *(ponteiro + 1) = 10; // altera o segundo valor do vetor de 2 para 10

    //printf("%p \n", ponteiro);

    //ponteiro = &vetor[1];
    //printf("%p \n", ponteiro);

    //ponteiro = &vetor[2];
    //printf("%p \n", ponteiro);

    getchar();
    return 0;
}