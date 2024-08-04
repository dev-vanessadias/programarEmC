#include <stdio.h>

int main(void) {

    void teste(void);

    teste();
    teste();
    teste();

}

void teste(void) {
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *=2;

    printf("Local Automatica: %i \n", variavelLocalAutomatica);
    printf("Local Estática: %i \n", variavelLocalEstatica);
}
