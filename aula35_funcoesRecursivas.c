#include <stdio.h>

// uma funcao recursiva é uma funcao que chama ela mesmo

int main(void) {

    int fatorial (int x);
    int numero, resultado;

    printf("Digite um número: ");
    scanf("%i", &numero);

    resultado = fatorial(numero);

    printf("O fatorial é: %i", resultado);

}
int fatorial (int x) {

    int resultado;

    if (x == 0) {
        resultado = 1;
    }else {
        resultado = x * fatorial(x - 1);
                 // 3 * fatorial(x -1); EXEMPLO SE USUARIO DIGITOU NUMERO 3
                 // 2 * fatorial(x -1); EXEMPLO (2-1) =
                 // 1 * fatorial(x -1); EXEMPLO (1-1) =
                 // 0 * fatorial(x -1); EXEMPLO (0-0) =
                 // O fatorial é: 6
    }
    return resultado;

}