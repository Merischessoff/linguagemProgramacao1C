
//8 -  Fa�a um programa que fa�a a convers�o de um valor lido em reais para um valor em d�lares. Deve ser informada a cota��o do d�lar no dia pelo usu�rio.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,d,c;
    printf("Digite o valor em REAL para a convers�o: ");
    scanf("%f",&r);
    printf("Digite o valor atual do d�lar, se n�o souber o de hoje � 3,80 : ");
    scanf("%f",&d);
    c=r*d;
    printf("%.f*%.f=%.f \n O valor digitado de real para dolar e: %.f\n" ,r,d,c);
    system("pause");

}
