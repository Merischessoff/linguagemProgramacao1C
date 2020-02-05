
#include <stdio.h>
#include <stdlib.h>


int main (int argc, char** argv) {
float nota1, peso1, nota2, peso2, nota3, peso3, nota4, peso4, resp;
printf("Digite a nota 1:");
scanf("%f", &nota1);
printf("Digite o peso 1:");
scanf("%f", &peso1);
printf("Digite a nota 2:");
scanf("%f", &nota2);
printf("Digite a o peso 2:");
scanf("%f", &peso2);
printf("Digite a nota 3:");
scanf("%f", &nota3);
printf("Digite o peso 3:");
scanf("%f", &peso3);
printf("Digite a nota 4:");
scanf("%f", &nota4);
printf("Digite o peso 4:");
scanf("%f", &peso4);
resp=(nota1*peso1+nota2*peso2+nota3*peso3+nota4*peso4)/(peso1+peso2+peso3+peso4);
printf("Resposta:%.f",resp);
return 0
}
