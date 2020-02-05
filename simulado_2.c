#include <math.h>
#include<stdio.h>

int main(){
int n,c=1, divisor, cdivisor, raiz, i;

while(c<=10){

    printf("Digite um numero inteiro\n ");
    scanf("%d", &n);

    if (n==0){printf("Digite outro numero que não seja 0.\n"); scanf("%d", &n);}

    if (n%2==1) { for (i = 1; i <=n; i++){ if (n%i==0) { divisor=i; cdivisor++; printf("E devisor %d \n", divisor); printf("Tem %d divisores\n", cdivisor);}}}
    if (n%2==0) { raiz=sqrt(n); printf("Raiz quadrada: %d \n", raiz);}

    c++;
}

printf("Programador: Meridiane Schessoff Nunes Goncalves");


return 0;



}

