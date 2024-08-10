#include <stdio.h>

//https://pessoal.dainf.ct.utfpr.edu.br/jeansimao/Fundamentos1/LinguagemC/Prof_Linhares_Exercicios_2016_1.pdf
//Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois
//números reais. O programa deve retornar o resultado da operação recebida sobre estes dois números.

int main() {
    //Receber dois numers do usuario
    int num1, num2;

    printf("Digite o primeiro valor:  ");
    scanf("%i", &num1);
    printf("Digite o segundo valor:  ");
    scanf("%i", &num2);

    printf("Digite um operador matematico:  ");
    scanf("%i", &operador);

    //operadcao matematica

    if (operador == +) {
        soma = num1 + num2;
    } if eslse ( operador == -) {}
        subtrai = num1 - nume2;

    // Exibe os resultados
    printf("Maior valor: %i\n", maior);
    printf("Intermediário: %i\n", intermediario);
    printf("Menor valor: %i\n", menor);

    return 0;
}

