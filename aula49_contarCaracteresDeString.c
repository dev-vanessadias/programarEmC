#include <stdio.h>

int main(void) {

    int tamanhoString(char string[]); // declaracao da funcao 1 na main
    char stringUsauario[20];

    printf("Digite uma palavra(string): \n ");
    scanf("%s", stringUsauario);

    int num = tamanhoString(stringUsauario); // chamada da funcao 1

    printf("A string %s possui %i caracteres. \n", stringUsauario,
                                                   num);

    return 0;

}
int tamanhoString(char string[]) { // funcao 1

    int numCaracteres = 0;

    while(string[numCaracteres] != '\0') {
        ++numCaracteres; //conta numero de letras
    }
    ++numCaracteres; //conta numero de caracteres

    return numCaracteres;

};