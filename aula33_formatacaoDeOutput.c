#include <stdio.h>

int main(void) {

    int intVar = 99999999;
    int intVar2 = 10;
    double doubleVar = 100.123456789;

    //FORMATACAO VARIAVEIS INTEIRAS

    printf("Variavel inteira (%%d) =  %d \n", intVar); // %d = digito (base 10)
    printf("Variavel inteira (%%i) =  %i \n", intVar); // %i = inteira (base 10)
    printf("Variavel inteira (%%x) =  %x \n", intVar); // %x = ecxa decimais (base 16)
    printf("Variavel inteira (%%o) =  %o \n", intVar);
    printf(" \n");

    printf("Variavel inteira (%%d) =  %d \n", intVar2); // %d = digito (base 10)
    printf("Variavel inteira (%%i) =  %i \n", intVar2); // %i = inteira (base 10)
    printf("Variavel inteira (%%x) =  %x \n", intVar2); // %x = ecxa decimais (base 16)
    printf("Variavel inteira (%%o) =  %o \n", intVar2); // %o = numeros oitavos (base 8)
    printf(" \n");

    printf("Variavel inteira (%%d) =  %7d \n", intVar2); // %d = digito (base 10)
    printf("Variavel inteira (%%i) =  %5i \n", intVar2); // %i = inteira (base 10)
    printf("Variavel inteira (%%x) =  %3x \n", intVar2); // %x = ecxa decimais (base 16)
    printf("Variavel inteira (%%o) =  %o \n", intVar2); // %o = numeros oitavos (base 8)

    printf("------------------------------------ \n");
    printf(" \n");

    //FORMATACAO VARIAVEIS float e double

    printf("Variavel double (%%f) =  %f \n", doubleVar); // %f = perde a precisao no sexto digito
    printf("Variavel double, usar essa formatacao para moedas (%%f) =  %.2f \n", doubleVar); // %f = perde a precisao no sexto digito
    printf("Variavel double  (%%e) =  %e \n", doubleVar); // %e = notacao cientifica
    printf("Variavel double  (%%g) =  %g \n", doubleVar); // %g = perde a precisao e arredonda
    printf("Variavel double  (%%a) =  %a \n", doubleVar); // %a = enotcao cientifica usando virgula
    printf(" \n");

}