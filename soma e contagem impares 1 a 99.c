#include <stdio.h>

int main(){
int n=0, somaneg=0, contneg=0, aux=0;

for(n=1; n<=99; n++){
        aux=n%2;
    if (aux!=0){
        somaneg=somaneg+n;
        contneg++;
    }




}
printf("A soma dos numeros negativos do intervalo de 1 a 99 e %d\n", somaneg);
    printf("O intervalo de 1 a 99 tem %d numeros negativos\n", contneg);

return 0;

}





