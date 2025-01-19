#include <stdio.h>

int main(void){
    int numero;

    printf("Escolha um numero inteiro de 1 a 10: ");
    scanf("%d", &numero);

    for(int i = 1; i <= 10; i++){
        printf("%dx%d=%d\n", numero, i, numero * i);
    }

    return 0;
}