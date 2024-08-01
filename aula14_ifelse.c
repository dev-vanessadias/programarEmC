#include <stdio.h>

int main () {

    int idade;

    printf("Qual a sua idade?  ");
    scanf("%i", &idade);

    if (idade < 18) {
        printf("Bebidas alcoólicas NÃO liberadas. \n");
   } else {
        printf("Você pode beber com moderação. \n");
   }

    return 0;

}