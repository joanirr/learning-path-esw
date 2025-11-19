#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar número aleatório (escolha do computador)

    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

    // Início do jogo

    printf("Bem vindo ao jogo Maior, menor ou igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior.\n");
    printf("N. Menor.\n");
    printf("I. Igual.\n");

    printf("Escolha a comparação: \n");
    scanf("%c", &tipoComparacao);

    printf("Escolha seu número (entre 1 e 100):\n");
    scanf("%d", &numeroJogador);


        switch (tipoComparacao)
        {
        case 'M':
        case 'm':
            printf("Você escolheu a opção maior!\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            break;
        case 'N':
        case 'n':
            printf("Você escolheu a opção manor!\n");
            resultado = numeroJogador < numeroComputador ? 1 : 0;
            break;
        case 'i':
        case 'I':
            printf("Você escolheu a opção igual!\n");
            resultado = numeroJogador == numeroComputador ? 1 : 0;
            break;
        default:
        printf("Opção de jogo inválida!\n");
            break;
        }

    printf("O número do computador é %d e o número do jogador é %d\n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
        printf("Parabéns, você venceu!\n");
    } else {
        printf("Infelizmente, você perdeu!\n");
    }
    
    return 0;

}