#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *file;
    file = fopen("numeros.txt", "r");

    if (file == NULL) {
        printf("Arquivo nao encontrado \n");
    }

    int x, y, z;

    fscanf(file, "%i %i %i", &x, &y, &z);
    printf("%i %i %i \n", x, y, z);

    getchar();
    return 0;
}