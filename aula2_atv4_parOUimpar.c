#include <stdio.h>

//https://pessoal.dainf.ct.utfpr.edu.br/jeansimao/Fundamentos1/LinguagemC/Prof_Linhares_Exercicios_2016_1.pdf
// 4.Fazer um programa para ler um número do usuário e determinar se este número é par ou não


int main() {

    int numero;

    printf("Digite um númeo inteiro:  ");
    scanf("%i", &numero);

    if (numero % 2 == 0) {
        printf("O número %i é par", numero);
    } else {
        printf("O numero %i NÃO é par", numero);
    }

    return 0;
}