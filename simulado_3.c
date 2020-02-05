#include <math.h>
#include<stdio.h>

int main(){
int c=1, cod1=0, cod2=0, cod3=0, cod4=0, nulo=0, branco=0, voto, total=0;

while(c>0){

    printf("Digite o voto: ");
    scanf("%d", &voto);
    if (voto==0) { break;}
    if(voto==11){cod1++; }
    else if (voto==22){ cod2++;}
    else if (voto==33) { cod3++;}
    else if (voto==44) { cod4++;}
    else if (voto==77) { branco++;}
    else { nulo++;}

    total=cod1+cod2+cod3+cod4+branco+nulo;

    c++;
}

    printf("\nTotal de votos candidato 1: %d", cod1);
    printf("\nO percentual foi %d", (cod1*100)/total);
    printf("\nTotal de votos candidato 2: %d", cod2);
    printf("\npercentual foi %d", (cod2*100)/total);
    printf("\nTotal de votos candidato 3: %d", cod3);
    printf("\nO percentual foi %d", (cod3*100)/total);
    printf("\nTotal de votos candidato 4: %d", cod4);
    printf("\nO percentual foi %d", (cod4*100)/total);
    printf("\nTotal de votos em branco: %d", branco);
    printf("\nTotal de votos nulos: %d", nulo);
    printf("\nTotal de votos na eleicao foi %d", total);

printf("\nProgramador: Meridiane Schessoff Nunes Goncalves");


return 0;



}

