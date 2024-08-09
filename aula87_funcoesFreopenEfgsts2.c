#include <stdio.h>

int main(void) {

    char x[100];

    FILE *file = fopen("teste.txt", "r");

    fgets(x, 100, file);
    printf("%s \n", x);

    //fropen("teste2.txt", "r", file);
    fgets(x, 100, file);
    printf("%s \n", x);

    return 0;
}