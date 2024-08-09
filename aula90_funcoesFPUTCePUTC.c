#include <stdio.h>

// fputc é usado apenas como funcao
// putc pode ser usado também com macros
// as funcoes fputc e putctc fazem a mesma coisa,
// mas a funcao fputc nao pode ser usada como macro, apenas como funcao.

//stdin serve pra conseguir informacoes inputadas pelo teclado
//stdout é para a saida de informacao no console do DOS

int main(void) {

    char x[] = "coxinha";

    FILE *file = fopen("teste.txt", "w");

    int i = 0;
    while (x[i] != '\0') {
        //putc(x[i], stdout);
        putc(x[i], file);
        ++i;
    }

    return 0;
}