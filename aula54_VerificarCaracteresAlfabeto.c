#include <stdio.h>

int main(void) {

void alfabetico(char variavel); //declaracao da funcao 1 na main

char nome[20];
printf("Digite uma palavra: \n");
    scanf("%s", &nome);

    int i = 0;
    while (nome[i] != '\0') {
        alfabetico(nome[i]);
        ++i;
    }

    return 0;
}
void alfabetico(char variavel) { //funcao 1
    if((variavel >= 'a' && variavel <= 'z') ||
       (variavel >= 'A' && variavel <= 'Z')) {
        printf("É UMA LETRA \n");
    } else {
        printf("NÃO É UMA LETRA \n");
    }
}