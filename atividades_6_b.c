/*2 - Calculadora: Ler a opera��o de acordo com o c�digo. Ler dois operandos e imprimir o resultado. Usar case.

C�digo Opera��o
A Somar
B Subtrair
C Dividir
D Multiplicar*/

#include <stdio.h>

int main()
{
    float num1, num2;

    char op;

    printf("A Somar, B Subtrair, C Dividir, D Multiplicar");

    printf("\nDigite uma express�o no formato: num op num: ");

    scanf("%f %c %f", &num1, &op, &num2);

    switch( op ) {
    case 'a':
    printf("= %f", num1+num2); break;
    case 'b':
    printf(" = %f", num1-num2); break;
    case 'c':
    printf(" = %f", num1*num2); break;
    case 'd':
    printf(" = %f", num1/num2); break;
    default:
    printf("\nOperador desconhecido");

    }

    return 0;
}
