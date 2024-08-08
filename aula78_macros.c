#include <stdio.h>

#define PI 3.14159
#define DOIS_PI 2 * PI
#define AREA_CIRCULO(raio) raio * raio * PI

int main(void) {

    int area = 10;
;
    printf("%f \n", PI);
    printf("%f \n", DOIS_PI);
    printf("%f \n", AREA_CIRCULO(area));

    getchar();
    return 0;
}