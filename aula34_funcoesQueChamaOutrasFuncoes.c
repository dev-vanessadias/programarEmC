#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float somaDeDigitos(float num1, float num2); // chamada da funcao 1
    float a, b, soma;

    printf("Digite 2 números: \n");
    scanf("%f", &a);
    scanf("%f", &b);

    soma = somaDeDigitos(a , b);

    printf("A soma é %.2f \n", soma);

    //system("Pause");
    return 0;
}
float somaDeDigitos (float num1, float num2) { //funcao 1

    float valorAbsoluto (float x); //chamada da funcao 2

    if(num1 < 0) {
        num1 = valorAbsoluto(num1);
    }
    if (num2 < 0) {
        num2 = valorAbsoluto(num2);
    }
    return  num1 + num2;
}
float valorAbsoluto (float x) { //funcao 2
    return x * -1;
}