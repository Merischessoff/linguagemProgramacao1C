
#include<stdio.h>

int main(){
int cand1=0, cand2=0, cand3=0, cand4=0, nulo=0, branco=0, cod;

while(cod!=0){

    printf("Digite o codigo do voto:\n ");
    scanf("%d", &cod);

    if (cod==1) { cand1=cand1+cod;}
    if (cod==2) { cand2=cand2+cod;}
    if (cod==3) { cand3=cand3+cod;}
    if (cod==4) { cand4=cand4+cod;}
    if (cod==5) { nulo=nulo+cod;}
    if (cod==6) { branco=branco+cod;}
}

printf("O total de votos do candidato 1 e %d\n", cand1);
printf("O total de votos do candidato 2 e %d\n", cand2);
printf("O total de votos do candidato 3 e %d\n", cand3);
printf("O total de votos do candidato 4 e %d\n", cand4);
printf("O total de votos nulos e %d\n", nulo);
printf("O total de votos em branco e %d\n", branco);


return 0;

}

