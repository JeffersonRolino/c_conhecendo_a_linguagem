#include <stdio.h>

int main(){
    // Imprime o cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numero_secreto = 42;

    int chute;

    printf("Qual e o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi: %d", chute);

    return 0;
}