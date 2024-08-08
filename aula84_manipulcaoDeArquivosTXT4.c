#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *file;
    file = fopen("string.txt", "a");

    if (file ==NULL) {
        printf("Arquivo não encontrado.");
        getchar();
        exit(1);
    }

    fprintf(file, "Primeita linha \n");

    char frase[] = "Segunda linha \n";
    fputc(frase, file);

    char caractere = '3';
    fputc(caractere, file);

    fclose(file);


    return 0;
}