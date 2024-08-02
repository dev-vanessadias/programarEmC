#include <stdio.h>

int main () {

    int i;

    printf("Digite um número de 1 a 3  \n");
    scanf("%d", &i);

    switch (i) {
        case 1:
            printf("Digitou 1");
        break;
        case 2:
            printf("Digitou 2");
        break;
        case 3:
            printf("Digirou 3");
        break;
        default:
            printf("nun");
    }

    return 0;

}