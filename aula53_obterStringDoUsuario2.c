#include <stdio.h>

int main(void) {

    char linha[100];
    char caractere;
    int i = 0;

    do {
        caractere = getchar();
        linha[i] = caractere;
        ++i;
    } while (caractere != '\n');

    linha[i - 1] =  '\0'; //linha adiconada para corigir erro de caracteres
    printf("A FRASE É: %s \n", linha);

    return 0;
}