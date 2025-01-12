#include <stdio.h>

int main(){
    // Imprime o cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numero_secreto = 42;
    int chute;
    int tentativa = 1;
    double pontos = 1000;

    while(1){
        printf("Tentativa %d\n", tentativa);
        printf("Qual e o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi: %d\n\n", chute);

        if(chute < 0){
            printf("Voce nao pode chutar numeros negativos!\n\n");
            continue;
        }

        int acertou = (chute == numero_secreto);
        int maior = chute > numero_secreto;

        if(acertou){
            printf("Parabens! Voce acertou!\n");
            break;
        }
        else if(maior){
            printf("Seu chute foi maior que o numero secreto\n\n");
        }
        else{
            printf("Seu chute foi menor que o numero secreto\n\n");
        }

        tentativa++;

        double pontos_perdidos = (chute - numero_secreto) / 2.0;
        pontos = pontos - pontos_perdidos;
    }

    printf("Fim do jogo!\n");
    printf("Voce acertou em %d tentativas!\n", tentativa);
    printf("Total de pontos: %f\n", pontos);

    return 0;
}