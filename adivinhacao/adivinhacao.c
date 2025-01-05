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
    printf("Seu chute foi: %d\n\n", chute);

    if(chute == numero_secreto){
        printf("Parabens! Voce acertou!\n");
        printf("Jogue novamente, voce e um bom jogador!\n");
    }
    else {
        if(chute > numero_secreto){
            printf("Seu chute foi maior que o numero secreto\n");
        }

        if(chute < numero_secreto){
            printf("Seu chute foi menor que o numero secreto\n");
        }
    }

    return 0;
}