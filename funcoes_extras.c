//1 - Faça um programa que leia a nota de 10 alunos e armazene as notas em um vetor. Calcule:
//a - a média da classe (crie uma funcao que devolva a média)
//b - a quantidade de alunos aprovados, considere a média=7 (faça uma função que escreve o numero de aprovados)
//c - a quantidade de alunos reprovados. (faça uma função que escreve o número de reprovados)

#include <stdlib.h>
#include <stdio.h>

int main(){
    int i, cont=0, notas[10];

    for(i=0; i<10; i++){
            cont=cont+1;
        printf("Digite a nota do aluno %d \n", cont);
        scanf("%d", &notas[i]);

    }
    printf("A media a classe eh %d \n", media(notas[10]));
}

int media(int vet[10]){
    int i, soma;
    for(i=0; i<10; i++){
        soma=soma+vet[i];
    }
    return soma/10;
}
