#include <stdio.h>
#include <stdbool.h>

int main() {

    int myNum = 5;
    printf("%d\n", myNum);

    float myFloatNum = 5.99; // floating point number
    printf("%f\n", myFloatNum);

    char myLetter = 'D';     // string
    printf("%c\n", myLetter);

    bool variavelBool = 1; // 1 for true or 0 for false
    printf("%i \n", variavelBool);

    long int variableInt = 102023928384634534; // usar para numeros inteiros grandes que precisa de memoria maior
    printf("%i \n", variableInt);

    const int variableConst = 10; // essa variavel fixa o valor e nao pode ser alterado posteriormente
    printf("%i \n", variableConst);

    double variableDouble = 10.10;
    printf("%f \n", variableDouble);
    scanf("%lf", variableDouble);
    printf("%f \n", variableDouble);

    unsigned int soNumerosPositivos = 10; //limita a numeros positivos
    printf("%i \n", soNumerosPositivos);

    return 0;
}
