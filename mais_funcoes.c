
/*1 - Faça um programa que leia a nota de 10 alunos e armazene as notas em um vetor. Calcule:
a - a média da classe (crie uma funcao que devolva a média)
b - a quantidade de alunos aprovados, considere a média=7 (faça uma função que escreve o numero de aprovados)
c - a quantidade de alunos reprovados. (faça uma função que escreve o número de reprovados)*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int vet[10];

int mediaclasse(int vet[10]){
    int i;
    float media=0;

        for(i=0; i<10; i++){
            media=media+vet[i];
        }
        return media/10;
        }


int main(){
    int x;
    float media=0;

        for(x=0; x<10; x++){

            printf("Digite a nota do aluno %d  ", x+1);
            scanf("%d", &vet[x]);
        }


        printf("A media da classe eh %2.f", media);

}
