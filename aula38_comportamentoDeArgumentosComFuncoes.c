#include <stdio.h>

int main(void) {

    void funcaoPrint(int x, int vetor[]);// declaracao da funcao 1
    int x = 10;
    int vetor[3] = {10};

    funcaoPrint(x, vetor);

    printf("Variavel int na funcao principal = %i \n", x);
    printf("Vetor na funcao principal = %i \n", vetor[1]);

    return 0;
}
void funcaoPrint(int x, int vetor[]) { // funcao 1

    x = x + 10;
    vetor[1] = 20;

    printf("VARIAVEL INT NA FUNCAO PRINT = %i \n", x);
    printf("VETOR NA FUNCAO PRINT = %i \n \n", vetor[1]);

}
