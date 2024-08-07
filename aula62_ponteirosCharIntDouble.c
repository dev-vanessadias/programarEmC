#include <stdio.h>

int main(void) {

    int x = 10;
    double y = 20.50;
    char z = 'a';

    // primeira forma opcinal de declaracao PONTEIRO
   // int *pX;
   // pX = &x;

    // segunda forma opcional de declarar PONTEIRO
    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    double soma = *pX + *pY;

    int *resultado;
    resultado = &x;
    //resultado = -1243048120;

    printf("Prime endereco de x: %i ---- e ---- valor de x: %i \n", pX, *pX);
    printf("Prime endereco de y: %i ---- e ---- valor de y: %f \n", pY, *pY);
    printf("Prime endereco de z: %i ---- e ---- valor de z: %c \n", pZ, *pZ);
    printf("A soma de x e y é: %f \n", soma);
    printf("O endereco de memoria de X é: %i \n", resultado);
    //printf("O endereco de memoria de X é: %i \n", *resultado);

    getchar();
    return 0;
}