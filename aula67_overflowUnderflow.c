#include <stdio.h>

int main(void) {

    short x = 2146637237; //overflow ou transbordamento da variavel -  memoria nao possui bits o suficiente para armazenar a variavel que é muito grande
    short y = -62616261323;

    short x = 2146637237; // underflow - uma variavel declarada como int consegue armazenar um numero maior que uma short
    short y = -62616261323;

    printf("%i \n", x);
    printf("%i \n", y);


    getchar();
    return 0;
}