#include <stdio.h>

int main(void) {

    printf("DeAlunoParaAluno \n"); // pula uma linha
    printf("DeAlunoParaAluno \0"); // move o cursor para proximo caracter
    printf("DeAlunoParaAluno \a"); //emite som
    printf("DeAlunoParaAluno \b"); //move o cursor uma posicao a esquerda
    printf("DeAlunoParaAluno \t"); //pula espacao
    printf("DeAlunoParaAluno \r"); // volta o cursor para o inicio da linha
    printf("\"DeAlunoParaAluno\""); // serve para colocar palavas entre aspas " ".
    printf("\'DeAlunoParaAluno\'"); // serve para colocar palavas entre apostrofos ''.

    getchar();
    return 0;
}
