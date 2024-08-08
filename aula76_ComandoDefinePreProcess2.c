#include <stdio.h>

#define PI 3.14159
#define NULO 0

double areaCirculo(double raio) { //1// FUNCAO 1
    return raio * raio * PI;
}

int main(void) {

    double areaCirculo(double raio); // chamada da funcao 1 na main
    double r; //nessa variavel ira guardar o valor de raio
    int i = 3;

    while (i != NULO) {
        printf("Digite o raio do circulo: ");
        scanf("%lf", &r);
        printf("A area do cirsulo é %lf \n", areaCirculo(r));
        --i;
    }

    getchar();
    return 0;
}