#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main(){
    // Imprime o cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numero_secreto = 42;
    int chute;

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n\n", chute);

        int acertou = (chute == numero_secreto);
        int maior = chute > numero_secreto;

        if(acertou){
            printf("Parabens! Voce acertou!\n");
            printf("Jogue novamente, voce e um bom jogador!\n\n");
            break;
        }
        else if(maior){
            printf("Seu chute foi maior que o numero secreto\n\n");
        }
        else{
            printf("Seu chute foi menor que o numero secreto\n\n");
        }
    }

    printf("Fim do jogo!\n");

    return 0;
}