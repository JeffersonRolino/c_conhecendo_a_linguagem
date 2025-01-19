#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Imprime o cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int seed = time(0);
    srand(seed);

    int numero_grande = rand();

    int numero_secreto = numero_grande % 100;
    int chute;
    double pontos = 1000;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil - (2) Medio - (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numero_de_tentativas;

    switch (nivel) {
        case 1:
            numero_de_tentativas = 20;
            break;
        case 2:
            numero_de_tentativas = 15;
            break;
        case 3:
            numero_de_tentativas = 5;
            break;
        default:
            numero_de_tentativas = 10;
            break;
    }

    for(int i = 1; i <= numero_de_tentativas; i++){
        printf("Tentativa %d\n", i);
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
            printf("Fim do jogo!\n");
            printf("Voce acertou em %d tentativas!\n", i);
            printf("Total de pontos: %.1f\n", pontos);
            break;
        }
        else if(maior){
            printf("Seu chute foi maior que o numero secreto\n\n");
        }
        else{
            printf("Seu chute foi menor que o numero secreto\n\n");
        }

        double pontos_perdidos = abs(chute - numero_secreto) / (double) 2;

        pontos = pontos - pontos_perdidos;
    }

    printf("Voce perdeu! Seu numero de tentativas acabou...\n");
    printf("Fim do jogo!\n");

    return 0;
}