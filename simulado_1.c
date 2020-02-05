
#include<stdio.h>

int main(){
int n,c, simpar=0, cpar=1, maior, menor;

while(c>0){

    printf("Digite um numero inteiro\n ");
    scanf("%d", &n);

 c++;

    if (n==0) { break;}

    if (n%2==0) {cpar++;}
    else { simpar=simpar+n;}

    if(n>menor){ maior=n;}
    else{ menor=n;}

}

printf("O maior valor e %d\n", maior);
printf("O menor valor e %d\n", menor);
printf("O intervalo contem %d numeros pares\n", cpar );
printf("A soma dos numeros impares e %d \n\n", simpar);

printf("Programador: Meridiane Schessoff Nunes Goncalves");


return 0;



}

