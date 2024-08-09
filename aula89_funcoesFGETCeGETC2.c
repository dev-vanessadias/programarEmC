#include <stdio.h>

//EOF-  end of file quer que o ciclo seja executado ate atingir o final do arquivo

int main(void) {


    char x[100];

    FILE *file = fopen("teste.txt", "r");

    int i = 0;
    while ((x[i] = fgetc(file)) != EOF) {
        ++i;
    }
    x[i] = '\0';

    printf("%s", x);
    
    return 0;
}
