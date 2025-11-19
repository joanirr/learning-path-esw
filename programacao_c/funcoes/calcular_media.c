#include <stdio.h>

int main(){

    int opcao;
    float nota1, nota2, media;

    printf("Menu de gerenciamento de notas:\n");
    printf("Escolha uma opção:\n");
    printf("1. Calcular média.\n");
    printf("2. Determinar status.\n");
    printf("3. Sair.\n");
    printf("Escolha:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
        printf("Calcular a média.\n");
        printf("Insira sua primeira nota:\n");
        scanf("%f", &nota1);
        printf("Insira sua segunda nota:\n");
        scanf("%f", &nota2);
        // Testar a condição se a nota é >= 0 e <= 10
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
            media = (nota1 + nota2) / 2;
            printf("A média é %.2f\n", media);
        } else {
            printf("Entrada com valores de notas errados!\n");
        }
        break;
        case 2:
        printf("Determinar status.\n");
        printf("Insira sua média: \n");
        scanf("%f", &media);
        //media >= 5 ? printf("Aprovado!\n") : printf("Reprovado\n");
        if (media >= 7)
        {
            printf("Aprovado!\n");
        } else if (media >= 5){
            printf("Recuperação!\n");
        } else {
            printf("Reprovado!\n");
        }
        break;
        case 3:
        printf("Saindo...\n");
        break;
        default:
        printf("Opção inválida!\n");
        break;

        return 0;

    }
}


