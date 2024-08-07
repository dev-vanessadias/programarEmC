#include <stdio.h>

//acessar endereco de memoria no computador

int main(void) {

    //case 0:
    int x;
    x = 10;
    printf("case 0: %i \n", &x);// o simbolo "&"busca na memoria o local que foi armazenado a varial e retorna o numero do endereco
    printf("case 0: %i \n", x);// sem o simbolo retorna o valor atribuido para a variavel
    printf("acima - o simbolo \"&\" na memoria aonde foi armazenado_______- \n");


   //case 1:
   // int *ponteiro;
  //  ponteiro = &x;
  //  printf("case 1: %i \n", *ponteiro);// com o simbolo "*" retorna o valor atribuido para a variavel
  //  printf("case 1: %i \n", ponteiro);// sem o simbolo "*" retorna o endereco da memoria
    //printf("______________________________- \n");
    printf(" \n");

    //case 2:
    int y = 20;
    int z = y;
    y = 30;
    printf("case 2: %i %i \n", y, z);
    printf("acima - ponteiro nao altera valor de Y______________________________- \n");
    printf(" \n");


    //case 3:
    int j = 15;
    int *ponteiro;
    ponteiro = &j;

    int d = 18;
    *ponteiro = d;
    printf("case 3: %i %i \n", j, d);
    printf("acima - ponteiro altera valor de J porque foi direto no endereco de memoria de \"d\" e buscou valor armazenado \n");
    printf(" \n");

    getchar();
    return 0;
}