#include <stdio.h>
#include <stdlib.h>

int main()
{

// Declaracao das variaveis
int i, valor=0, cont=0;
int vetnotas[10];

for(i=1; i<=10; i++){
vetnotas[i]=0;


// Recebe o valor do saque
printf("Digite o valor a ser sacado (multiplo de 2): ");
scanf("%d", &valor);

// Verifica se e multiplo de 2
if (valor % 2 != 0)
{
printf("O valor deve ser multiplo de 2.");
exit(1);
}

if(valor>0){

for(i=1; i>1; i++){
if (valor >= 100)
{
valor = valor - 100;
vetnotas[i]=100;
cont++;
}

if (valor >= 50)
{
valor = valor - 50;
vetnotas[i]=50;
cont++;
}

if (valor >= 20)
{
valor = valor - 20;
vetnotas[i]=20;
cont++;
}

if (valor >= 10)
{
valor = valor - 10;
vetnotas[i]=20;
cont++;
}

if (valor >= 5 && (valor - 5 % 2 == 0))
{
valor = valor - 5;
vetnotas[i]=5;
cont++;
}

if (valor >= 2)
{
valor = valor - 2;
vetnotas[i]=2;
cont++;

}
break;

}
}

for(i=1; i>cont; i++){
printf("\nNotas: %d\n", vetnotas[i]);
}
}
return 0;

}
