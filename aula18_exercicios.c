#include <stdio.h>

//inverter um numero sequencial digitado pelo usuário
//ver versao original do video pois o professor criou logica para reconhecer numeros negativos

int main() {

    int numero, cifra;

    printf("Digite uma sequencia de números positivos:  ");
    scanf("%i", &numero);

    if (numero >= 0) {
        do {
            cifra = numero % 10;
            printf("%i", cifra);
            numero =  numero / 10;
        } while (numero != 0);
        printf("\n");

    } else {
        printf("nun");

    }




    return 0;
}