#include <stdio.h>

int main(void) {

    int x = 1;
    int y = 0;

    //PRE INCREMENTO ou decremento
    y = ++x; // AQUI Y PASSA A VALER 2 PQ X=1 +  X=1
    x = x + 1;
    y = x;

    //POS INCREMENTO ou decremento
    y = x++;
    y = x;
    x = x + 1;


    printf("x = %i \n", x);
    printf("x = %i \n", y);

    getchar();
    return 0;
}