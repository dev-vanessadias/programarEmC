#include <stdio.h>

//https://pessoal.dainf.ct.utfpr.edu.br/jeansimao/Fundamentos1/LinguagemC/Prof_Linhares_Exercicios_2016_1.pdf
//5. Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar se estes
//valores podem formar os lados de um triângulo. Em caso afirmativo, informar se o triângulo
//é equilátero, isósceles ou escaleno.
//equilátero = todos os lados possuem a mesma medida
//isósceles = possui dois lados iguais e um difrente
//escaleno = tem todos s lador diferentes

int main() {

  //Receber 3 valores digitados pelo usuario:
    float num1, num2, num3;

    printf("Digite o primeiro valor:  ");
    scanf("%f", &num1);
    printf("Digite o segundo valor:  ");
    scanf("%f", &num2);
    printf("Digite o terceiro valor:  ");
    scanf("%f", &num3);

    //verifica se é um triangulo
    if ((num1 + num2 > num3) && (num1 + num3 > num2) && (num2 + num3 > num1)) {
        printf("é um triangulo. \n");
    }

    //verificar tipo do triagulo
    float triangulo;

    if(num1 == num2 && num2 == num3) {
        printf("O triangulo é equilátero");
    } else if (num1 == num2 || num1 == num3 || num2 == num3) {
        printf("O trinangulo é isoceles");
    } else {
        printf("O triangulo é escaleno");
    }







    return 0;
}