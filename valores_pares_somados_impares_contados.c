#include <stdio.h>

int main() {

int cont=1, somap=0, contimpar=0, aux=0, n;

printf("Digite um numero inteiro e positivo: ");
scanf("%d", &n);

while (n>=cont) {
aux=n%2;
if(aux==0){somap=somap+cont;}
else {contimpar++;}
cont--;
}

printf("A soma dos numeros positivos do intervalo e %d", somap);
printf("O intervalo de números tem %d números impares", contimpar);

}
