#include <stdio.h>

int main(void) {

    struct lista {
        int valor;
        struct  lista *proximo; //ponteiro proximo que aponta um estrutura lista, tem que passar pra ele o endereco de memoria de outra estrutura lista

    };

    //declaracao de mebros da estrutura lista
    struct lista m1, m2, m3; //1//variavel
    struct lista *gancho = &m1; //aponta endereco de memoria da varial m1

    m1.valor = 10; //atribuicao de valor para m1
    m2.valor = 20; //atribuicao de valor para m2
    m3.valor = 30; //atribuicao de valor para m3

    m1.proximo = &m2; //m1 aponta endereco de memoria de m2 - gancho
    m2.proximo = &m3; //m2 aponta endereco de memoria de m3 - gancho
    m3.proximo = (struct lista *) 0; // neste caso é o fechamento da lista pq nao tem proximo para o gancho

    //PARA ACESAR VALO DOS MEBROS m1,m2 e m3
    while (gancho != (struct lista *)0) {
        printf("%i \n", gancho->valor);
        gancho = gancho->proximo;
    }
    getchar();
    return 0;
}