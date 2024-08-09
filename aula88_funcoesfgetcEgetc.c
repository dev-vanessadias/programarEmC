#include <stdio.h>

// fgetc é usado apenas como funcao
// getc pode ser usado também com macros
// as funcoes fgetc e getc fazem a mesma coisa,
// mas a funcao fgetc nao pode ser usada como macro, apenas como funcao.

int main(void) {

    char x[100];

    //x[0] = fgetc(stdin);
    //printf("%c", x[0]);

    int i = 0;
    while ((x[i] = fgetc(stdin)) != '\n') {
        ++i;
    }

    x[i] = '\0';

    printf("%s",x);

    return 0;
}