#include <stdio.h>

//https://pessoal.dainf.ct.utfpr.edu.br/jeansimao/Fundamentos1/LinguagemC/Prof_Linhares_Exercicios_2016_1.pdf
//Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois
//números reais. O programa deve retornar o resultado da operação recebida sobre estes dois números.

int main() {
    //Receber dois numers do usuario
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro valor:  ");
    scanf("%f", &num1);
    printf("Digite o segundo valor:  ");
    scanf("%f", &num2);

    getchar();

    printf("Digite um operador matematico:  ");
    scanf("%c", &operador);

    //operadcao matematica
    if (operador == '+') {
        resultado = num1 + num2;
        printf("a soma é %f \n", resultado);
    }else if (operador == '-') {
        resultado = num1 - num2;
        printf("a subtracao é %f \n ", resultado);
    }else if (operador == '*') {
        resultado = num1 * num2;
        printf("a multiplicacao é %f \n ", resultado);
    }else if (operador == '/') {
        if (num2 != 0){
            resultado = num1 / num2;
            printf("a divisao é %f \n ", resultado);
        }else {
            printf("divisao por 0 nao permitida. \n");
        }
    }else {
        printf("Operacao invalida");
    }

        return 0;
    }

