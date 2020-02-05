
//8 -  Faça um programa que faça a conversão de um valor lido em reais para um valor em dólares. Deve ser informada a cotação do dólar no dia pelo usuário.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,d,c;
    printf("Digite o valor em REAL para a conversão: ");
    scanf("%f",&r);
    printf("Digite o valor atual do dólar, se não souber o de hoje é 3,80 : ");
    scanf("%f",&d);
    c=r*d;
    printf("%.f*%.f=%.f \n O valor digitado de real para dolar e: %.f\n" ,r,d,c);
    system("pause");

}
