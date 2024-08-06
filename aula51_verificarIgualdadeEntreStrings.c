#include <stdio.h>

int main(void) {

    _Bool strigsIguais(char s1[], char s2[]); //declaracao da funcao1 na main

    if(strigsIguais("casa", "casa")) {
        printf("sao iguais \n");
    }else {
        printf("nao sao iguais \n");
    }

    return 0;

}
_Bool strigsIguais(char s1[], char s2[]) { //funcao1

    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] !='\0') {
        ++i;
    }
    if(s1[i] == '\0' && s2[i] == '\0') {
        return 1;
    } else {
        return 0;
    }

}