#include <stdio.h>

int main(void) {

    char nome[20];
    char sobrenome[20];

    printf("Insira o seu nome: \n");
    scanf("%s", &nome);
    printf("Insira o seu sobrenome: \n");
    scanf("%s", &sobrenome);

    printf("O seu nome completo é: %s %s \n", nome, sobrenome);

    return 0;
}