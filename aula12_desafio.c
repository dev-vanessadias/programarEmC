

//gerarum número fatorial de um número


#include <stdio.h>

int main () {

    int numero = 6;
    int fatorial = 1;


  for (; numero >= 1; numero--) {
      fatorial = fatorial * numero;

  }

    printf("O numero fatorial é %i \n", fatorial);

    return 0;

}
