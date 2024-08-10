#include <stdio.h>

//https://pessoal.dainf.ct.utfpr.edu.br/jeansimao/Fundamentos1/LinguagemC/Prof_Linhares_Exercicios_2016_1.pdf


/*2. Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média (que
pode não ser inteira). */

int main() {

    float valor1, valor2, valor3, media;

    printf("Digite o primeiro valor:  ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor:  ");
    scanf("%f", &valor2);

    printf("Digite o terceiro valor:  ");
    scanf("%f", &valor3);

    media = (valor1 + valor2 + valor3) /  3;

    printf("A média do tres valores é: %f", media);






    return 0;
}