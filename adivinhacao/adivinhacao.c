#include <stdio.h>

int main(){
    // Imprime o cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numero_secreto = 42;
    int chute;
    int ganhou = 0;
    int tentativa = 1;

    while(ganhou == 0){
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
            ganhou = 1;
        }
        else if(maior){
            printf("Seu chute foi maior que o numero secreto\n\n");
            tentativa++;
        }
        else{
            printf("Seu chute foi menor que o numero secreto\n\n");
            tentativa++;
        }
    }

    printf("Fim do jogo!\n");
    printf("Voce acertou em %d tentativas!", tentativa);

    return 0;
}