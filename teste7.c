//7 - A Joalheria Silva est� fazendo anivers�rio e resolveu premiar o primeiro cliente do dia devolvendo a ele o valor da compra ao quadrado.
//Fa�a um programa que leia o pre�o unit�rio do produto adquirido pelo cliente, a quantidade e calcule o total gasto pelo cliente. Mostre o total e calcule o
//total elevado ao quadrado. Mostre o valor do pr�mio.

//Premio=valordacompra*valordacompra
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
float vunit, qprod, resp;
printf("Digite o valor unit�rio do produto:");
scanf("%f", &vunit);
printf("Digite a quantidade do produto:");
scanf("%f", &qprod);
resp=(vunit*qprod)*(vunit*qprod);
printf("Resposta:%.4f",resp);
}



