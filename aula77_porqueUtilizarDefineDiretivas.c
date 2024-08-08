#include <stdio.h>

#define NUMERO_DE_ALUNOS 2000

void umafuncao(void) {
    printf("%i \n", NUMERO_DE_ALUNOS);
}
void umaOutraFuncao(void) {
    printf("%i \n", NUMERO_DE_ALUNOS);
}
int main(void) {

    void umafuncao(void);
    void umaOutraFuncao(void);

    printf("%i \n", NUMERO_DE_ALUNOS);
    umafuncao();
    umaOutraFuncao();

    getchar();
    return 0;
}