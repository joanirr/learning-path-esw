#include <stdio.h>

int main(){

int a = 10;
float b = 3.5;
float resultado = a + b; // 'a' é convertido implicitamente para float

printf("Resultado: %.2f\n", resultado);

int a1 = 10;
int b1 = 3;
float quociente = (float) a1 / b1; // 'a1' e 'b1' são explicitamente convertidos para float

printf("Quociente: %.2f\n", quociente);


return 0;

}