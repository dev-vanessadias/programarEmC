#include <stdio.h>

//https://pessoal.dainf.ct.utfpr.edu.br/jeansimao/Fundamentos1/LinguagemC/Prof_Linhares_Exercicios_2016_1.pdf
//6. Fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior deles, o
//menor deles e o valor intermediário.

int main() {
    //Receber 3 valores digitados pelo usuario:
    int a, b, c;
    int maior, menor, intermediario;

    printf("Digite o primeiro valor:  ");
    scanf("%i", &a);
    printf("Digite o segundo valor:  ");
    scanf("%i", &b);
    printf("Digite o terceiro valor:  ");
    scanf("%i", &c);

    //comparar numeros
    if (a > b && a > c) {
        maior = a;
        if (b > c) {
            intermediario = b;
            menor = c;
        } else {
            intermediario = c;
            menor = b;
        }
    } else if (b > a && b > c) {
        maior = b;
        if (a > c) {
            intermediario = a;
            menor = c;
        } else {
            intermediario = c;
            menor = a;
        }
    } else {
        maior = c;
        if (a > b) {
            intermediario = a;
            menor = b;
        } else {
            intermediario = b;
            menor = a;
        }
    }

    // Exibe os resultados
    printf("Maior valor: %i\n", maior);
    printf("Intermediário: %i\n", intermediario);
    printf("Menor valor: %i\n", menor);

    return 0;
}

