#include <stdio.h>

int somarVetor(int vetor[], const int n) { // funcao 1 - vai somar os valores de um vetor utiluzando ponteiros

    int soma = 0;
    int *ponteiro;
    int *const finalVetor = vetor + n; // o +n no final da expresao pede para o ponteiro apontar no ultimo membro
                                       //do vetor, sem ele o ponteiro apontaria para o primeiro membro do vetor.

    //ponteiro = busca endereco de memoria
    //*ponteiro = busca o valor armazenado no endereco de memoria
    for (ponteiro = vetor; ponteiro < finalVetor; ++ponteiro) {
        soma += *ponteiro;
    }
    return soma; //retorno do laco for
}

int main(void) {
    int somarVetor(int vetor[], const int n); //declaracao da funcao 1
    int vetor[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5}; //variavel com vetor que sera somado

    printf("A soma dos membros do vetor = %i", somarVetor(vetor,10));

    getchar();
    return 0;
}