#include <stdio.h>

//getchar - guarda valor digitado
//puchar - imprimi valor digitado

int main(void) {

    //exemplo 1//
   // char x[10];

  // int i = 0;
   // while ((x[i]= getchar()) != '\n' && i < 8) {
  //      ++i;
  //  }

   // x[++i] = '\0';
  //  printf("%s", x);

  //  return 0;

  //EXEMPLO 2 - ESSE PROGRAMA VAI REPLICA TUDO O QUE FOR ESCRITO
int i = 0;
 char x;

 while ((x = getchar()) != '\n') {
  putchar(x);
 }

    return 0;
}