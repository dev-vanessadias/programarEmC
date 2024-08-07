#include <stdio.h>

int main(void) { // funcao 0 principal

    void testeVariavel(int x); // chamada da funcao 1 - linha 17
    void testePonteiro(int *pX); // chamada da funcao 2 - linha
    int teste = 1; //1//variavel
    int *pTeste = &teste; //2//variavel

    testeVariavel(teste); //chama a funcao 1 com o valor da variavel //1// E NAO ALTERA VALOR porque apenas copia o valor da variavel
    testePonteiro(pTeste); // chama a funcao 1 com o valor da variavel //1// teste + o valor 1 que é adicionado pelo incremento da funcao 2

    printf("teste variavel: %i \n", teste);
    printf("teste ponteiro: %i \n", pTeste);


    getchar();
    return 0;
}

void testeVariavel(int x) { //funcao 1 -  recebe o valor atribuido a variavel //1// teste da linha 7
    ++x;
    printf("Teste variavel x: %i \n", x);
}
void testePonteiro(int *pX) { // funcao 2 - recebe o endereco de memoria
    ++*pX;
}