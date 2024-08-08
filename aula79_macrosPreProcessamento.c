#include <stdio.h>

#define MAIOR(x, y) x > y ? x : y //x é mair que j? se sim retorne x se nao retorne y
#define E_MINUSCULO(char) char >= 'a' && char <= 'c'

int main(void) {

    char x = 'c';

    if(E_MINUSCULO(x)) {
        printf("E uma letra minuscula \n");
    } else {
        printf("Nao é uma leta minuscula \n");
    }

    printf("%i \n", MAIOR(10, 50));

    getchar();
    return 0;
}