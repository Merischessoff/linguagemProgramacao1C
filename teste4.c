#include <stdio.h>
#include <conio.h>

#define INPC 0.75;

int main()
{
float idfunc, satual, indprodut, salario novo;
printf(“Digite o id funcionário:”);
scanf(“%f”, &idfunc);
printf(“Digite o salário atual:”);
scanf(“%f”, &satual);
printf(“Digite o indice de produção:”);
scanf(“%f”, &indprodut);
aumento=satual*INPC/100
aumento2=satual*indprodut/100;
salario novo=aumento+aumento2;
printf(“O salario novo e %f \n”, salario novo);
return 0;

}

/*4 - Considerando que o aumento dos funcionários é de 75% do INPC e mais um percentual de produtividade discutido com
a empresa. Construir um programa que lê o número do funcionário, seu salário atual, o valor do INPC e o índice de
produtividade e escreve o número do funcionário, seu aumento e o valor de seu novo salário.
Aumento=Salario*0,75*INPC/100  +Salario*IndiceProdutividade/100
Salario Novo = Salario + Aumento */

