#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;
    char jogarNovamente;

    srand(time(0));

    do {
        numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

        printf("\n=== Jogo Maior, Menor ou Igual ===\n");
        printf("M - Maior\n");
        printf("N - Menor\n");
        printf("I - Igual\n");

        printf("Escolha a comparação: ");
        scanf(" %c", &tipoComparacao);

        printf("Escolha seu número (entre 1 e 100): ");
        scanf("%d", &numeroJogador);

        switch (tipoComparacao) {
            case 'M':
            case 'm':
                printf("Você escolheu a opção MAIOR!\n");
                resultado = numeroJogador > numeroComputador ? 1 : 0;
                break;
            case 'N':
            case 'n':
                printf("Você escolheu a opção MENOR!\n");
                resultado = numeroJogador < numeroComputador ? 1 : 0;
                break;
            case 'I':
            case 'i':
                printf("Você escolheu a opção IGUAL!\n");
                resultado = numeroJogador == numeroComputador ? 1 : 0;
                break;
            default:
                printf("Opção inválida!\n");
                resultado = -1; // valor neutro
        }

        printf("Número do computador: %d | Número do jogador: %d\n",
               numeroComputador, numeroJogador);

        if (resultado == 1) {
            printf("Parabéns, você venceu!\n");
        } else if (resultado == 0) {
            printf("Infelizmente, você perdeu!\n");
        }

        printf("\nDeseja jogar novamente? (S/N): ");
        scanf(" %c", &jogarNovamente);

    } while (jogarNovamente == 'S' || jogarNovamente == 's');

    printf("\nObrigado por jogar! Até a próxima.\n");

    return 0;
}