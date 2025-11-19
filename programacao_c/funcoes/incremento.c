#include <stdio.h>

int main (){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    resultado = numero1++;
    //printf("Após incremento: %d\n", numero1);
    printf("Após Pós-Incremento - Número 1: %d Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Após Pré-Incremento - Número 1: %d Resultado: %d\n", numero1, resultado);

    resultado = numero1--;
    printf("Após Pós-Decremento - Número 1: %d Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Após Pré-Decremento - Número 1: %d Resultado: %d\n", numero1, resultado);

    numero1--;
    printf("Após decremento: %d\n", numero1);

    return 0;
    
}