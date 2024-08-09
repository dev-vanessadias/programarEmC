#include <stdio.h>

int main(void) {

    char x[100];

    fgets(x, 100, stdin);
    printf("%s", x);

    //stdin // é o modo de entrada de informacao, exemplo teclado

    freopen("arquivo1.tx", "r", stdin);
    fgets(x, 100, stdin);
    printf("%s", x);



    return 0;
}