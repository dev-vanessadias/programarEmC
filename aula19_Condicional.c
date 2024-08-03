#include <stdio.h>

int main() {

    int num1 = 100;
    int num2 = 20;
    int answer;

    num1 < num2 ? printf("Sim \n") : printf("Não \n");
    answer = (num1 < num2) ?  10 : -10;

    printf("%i\n", answer);

    return 0;
}