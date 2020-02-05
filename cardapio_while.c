
#include<stdio.h>

int main(){
int cod, cont;
float quant;

while(cont>0){

    printf("\nDigite o codigo do lanche:\n ");
    scanf("%d", &cod);

    printf("Digite a quantidade:\n ");
    scanf("%f", &quant);

 cont++;

    if (cod==100) { printf("Cachorro quente\n"); printf("O valor total e: R$ %.2f", quant * 11);}

    if (cod==101) { printf("Bauru simples\n"); printf("O valor total e: R$ %.2f", quant * 13);}

    if (cod==102) { printf("Bauru c/ovo\n"); printf("O valor total e: R$ %.2f", quant * 15);}

    if (cod==103) {printf("Hamburguer\n"); printf("O valor total e: R$ %.2f", quant * 13);}

    if (cod==105) {printf("Refrigerante\n"); printf("O valor total e: R$ %.2f", quant * 3);}

    if ((cod>105)||(cod<100)){printf("codigo invalido\n"); break;}
}

return 0;

}

