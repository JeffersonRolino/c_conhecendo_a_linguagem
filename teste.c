#include <stdio.h>

int main(void){
    int a = 3;
    int b = 2;

    double pontos = (double) a / b;
    printf("%f\n", pontos);

    double pi = 3.1415;
    int pi_convertido = (int)pi;

    printf("PI: %f - PI_CONVERTIDO: %d\n", pi, pi_convertido);

    return 0;
}