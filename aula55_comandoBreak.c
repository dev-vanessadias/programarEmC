#include <stdio.h>

int main(void) {

    int i ;
    for (i = 1; i <= 20; ++i) {
        if (i % 3 == 0 && i % 9 == 0) {
            printf(" o numero %i é divisivel \n", i);
            break;// para o codigo quando encontra a primeira condicao verdadeira da logica  pedida
        } else {
            printf("o numero %i náo é \n", i);
        }
    }
    getchar();
    return 0;
}
