#include <stdio.h>

void copiarString(char *copiarDaqui, char *colarAqui) { //funcao global 1

    while (*copiarDaqui != '\0') {
        *colarAqui = *copiarDaqui;
        ++copiarDaqui;
        ++colarAqui;
    }
    *colarAqui = '\0';

}
int main(void) {

    void copiarString(char *copiarDaqui, char *colarAqui); // chamada da funcao global 1

    char string1[] = "Pao com manteiga";
    char string2[20];

    copiarString(string1, string2);
    printf("%s \n", string2);

    getchar();
    return 0;
}