#include <stdio.h>

int main(){
    // Imprime o cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numero_secreto = 42;
    int chute;

    for(int i = 1; i <= 3; i++){
        printf("Tentativa %d de 3\n", i);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n\n", chute);

        int acertou = (chute == numero_secreto);

        if(acertou){
            printf("Parabens! Voce acertou!\n");
            printf("Jogue novamente, voce e um bom jogador!\n");
            break;
        }
        else {
            int maior = (chute > numero_secreto);
            if(maior){
                printf("Seu chute foi maior que o numero secreto\n");
            }
            else{
                printf("Seu chute foi menor que o numero secreto\n");
            }
        }
    }

    printf("\nFim do jogo!\n");

    return 0;
}