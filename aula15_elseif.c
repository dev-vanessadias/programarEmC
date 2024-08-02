#include <stdio.h>

int main () {

    int idade;

    printf("Informar idade:  \n");
    scanf("%d", &idade);

    if (idade <= 5)
        printf("It's still a baby \n");
    else if (idade > 5 && idade <= 10)
         printf("It's a child");
    else if (idade > 10 && idade <= 15)
         printf("It's a teenager");
    else if (idade > 15 && idade <= 49)
    printf("It's a adult");
    else if (idade >= 50 && idade <= 110)
    printf("It's a elderly");
    else
        printf("Not found");


    return 0;

}