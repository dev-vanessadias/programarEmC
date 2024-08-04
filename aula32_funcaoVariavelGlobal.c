#include <stdio.h>

int gVariavelGlobal = 5;
// Uma varial global pode ser acessada por todas as funcoes,
//por nao estar dentro de nenhuma funcao especifica.*\


int main(void) {

    void teste(void);

    printf("Variavel Global: %i \n", gVariavelGlobal);
    teste();
    teste();

}

void teste(void) {
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *=2;

    gVariavelGlobal *= 2;

    printf("Local Automatica: %i \n", variavelLocalAutomatica);
    printf("Local Estática: %i \n", variavelLocalEstatica);
    printf("Variavel Global: %i \n", gVariavelGlobal);
}
