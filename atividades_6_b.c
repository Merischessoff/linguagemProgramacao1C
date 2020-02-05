/*2 - Calculadora: Ler a operação de acordo com o código. Ler dois operandos e imprimir o resultado. Usar case.

Código Operação
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

    printf("\nDigite uma expressão no formato: num op num: ");

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
