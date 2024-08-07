#include <stdio.h>

// os membros da estruturas contem ponteiros

int main(void) {

    struct horario {  //1//estrutura
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };

    //VARIAVEL HOJE -------------------------------------------------------------
    struct horario hoje; //2//variavel

    //valores atribuidos ao PONTEIRO
    int hora = 200;  //3//variavel
    int minuto = 300; //4//variavel
    int segundo = 400; //5//variavel

    //abaixo - forma de acessar o membro PONTEIRO de uma ESTRURURA
    hoje.pHora = &hora; //6//apontando o endeeco da variavel hora - linha 16
    hoje.pMinuto = &minuto; //7//apontando o endereco da variavl minuto - linha 17
    hoje.pSegundo = &segundo; //8//apontando o endereco da variael segundos - linha 18

    //abaixo - como acessar o valor do PONTEIRO
    printf("Hora: %i \n", *hoje.pHora); //chamando a estrutura da hora - linha 8
    printf("minuto: %i \n", *hoje.pMinuto); //chamando a estrutura da hora - linha 9
    printf("Segundo: %i \n", *hoje.pSegundo); //chamando a estrutura da hora - linha 10

    //FAZENDO UMA MODIFICACAO EXEMPLO
    *hoje.pSegundo = 1000; //modificou VALOR da linha 24 que antes valia 400
    printf("Segundo: %i \n", *hoje.pSegundo); //chamando a estrutura da hora - linha 10



    getchar();
    return 0;
}