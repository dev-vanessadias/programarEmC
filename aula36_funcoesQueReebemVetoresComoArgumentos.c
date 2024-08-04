#include <stdio.h>

// crie um afuncao para ordenar os numeros do vetor em ordem crescente

int main(void) {

    int vetor[10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
    int i;
    void ordemCrescente(int vetor[], int n);

    ordemCrescente(vetor, 10); //chamada da funcao 1

    for (i = 0; i < 10; ++i) {
        printf("%i ", vetor[i]);
    }
}

void ordemCrescente(int vetor[], int n) { //funcao1

    int i, j, temporaria;

    for(i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (vetor[i]> vetor[j]) {
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            }
        }
    }

}