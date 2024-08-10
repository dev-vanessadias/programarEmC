#include <stdio.h>
#include <math.h>

//https://pessoal.dainf.ct.utfpr.edu.br/jeansimao/Fundamentos1/LinguagemC/Prof_Linhares_Exercicios_2016_1.pdf

/*3. Fazer um programa para calcular uma trajetória parabólica. O programa deve:
a. Receber do usuário a altura relativa ao solo de onde o projétil é lançado, a velocidade
inicial em m/s e o ângulo de lançamento
b. Calcular e mostrar a quantos metros de distância o projétil atingirá o chão,
considerando aceleração da gravidade igual a 9,81 m/s2. */

//"y = – x2 + 3x, onde y é a altura atingida pelo míssil (em quilômetros)
//e x é o alcance (também em quilômetros)."


int main() {

    /*a. Receber do usuário a altura relativa ao solo de onde o projétil é lançado, a velocidade
    inicial em m/s e o ângulo de lançamento*/

    double alturaI, velocidadeI, anguloI;
    double v0x, v0y, g = 9.81, tempoVoo, distancia;

    printf("Digite a altura relativa ao solo:  \n");
    scanf("%lf", &alturaI);

    printf("Digite a velocidade inicial em m/s:  \n");
    scanf("%lf", &velocidadeI);

    printf("Digite o angulo do lançamento:  \n");
    scanf("%lf", &anguloI);

    // b. Calcular e mostrar a quantos metros de distância o projétil atingirá o chão,
    //considerando aceleração da gravidade igual a 9,81 m/s2.
    //FORMULA: "y = – x2 + 3x, onde y é a altura atingida pelo míssil (em quilômetros) e
    //x é o alcance (também em quilômetros)."


    // Converte o ângulo para radianos, necessário para as funções trigonométricas
    anguloI = anguloI * M_PI / 180.0;

    // Cálculo das componentes da velocidade inicial
    v0x = velocidadeI * cos(anguloI);
    v0y =  velocidadeI* sin(anguloI);

    // Cálculo do tempo total de voo
    tempoVoo = (v0y + sqrt(v0y * v0y + 2 * g * alturaI)) / g;

    // Cálculo da distância percorrida até atingir o solo
    distancia = v0x * tempoVoo;

    // Exibindo o resultado
    printf("O projétil atingirá o solo a uma distância de %.2f metros.\n", distancia);

    return 0;
}