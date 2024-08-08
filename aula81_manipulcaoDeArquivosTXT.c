#include <stdio.h>

int main(void) {

    FILE *file;
    file =fopen("teste.txt", "w"); //essa acao cria um arquivo no diretorio aonde esta esque arquivo c

    fprintf(file, "Pao com manteiga"); //escreve algo no arquivo txt criado
    fclose(file); // essa acao salva o arquivo

    getchar();
    return 0;
}