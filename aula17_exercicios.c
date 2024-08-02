#include <stdio.h>
#include <math.h>  // Inclui a biblioteca math.h para usar fmod

int main() {

    float nume1, nume2;

    printf("Digite o primeiro número: \n");
    scanf("%f", &nume1);

    printf("Digite o segundo número: \n");
    scanf("%f", &nume2);

    if (fmod(nume1, nume2) == 0) {  // Verifica se o resto da divisão é zero
        printf("O número %.2f é divisível pelo %.2f \n", nume1, nume2);
    } else {
        printf("O número %.2f NÃO é divisível pelo %.2f \n", nume1, nume2);
    }

    return 0;
}
