#include <stdio.h>

/*Nesta verificamos a diferença de declarar a sequencia,
no primero "while"caso declaramos a condiçao e depois imprimimos,
no segundo caso "do" imprimimos e depois declaramos a condição de verificação*/

int main () {

    int i = 0;

    while (i != 0) {
        printf("Teste \n");
    }

    do {
        printf("Teste 2 \n");
    } while (i != 0);

    return 0;

}