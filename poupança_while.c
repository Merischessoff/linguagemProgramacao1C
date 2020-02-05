#include<stdio.h>

int main(){

int contador=2;
float deposito=100, juros=0, soma=100;

    printf("mes 1\n ");
    printf("Total poupanca R$ 100,00\n");
    printf("Total poupanca com juros R$ 100,00\n");

while(contador<=12){
    deposito=deposito+100;
    juros=juros+0.50;
    soma=juros+deposito;

    printf("mes %d.\n ", contador);
    printf("Total poupanca R$ %.2f\n", deposito);
    printf("Total poupanca com juros R$ %.2f\n", soma);

    contador++;

}

return 0;
}
