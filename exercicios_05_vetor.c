
/*5 - Faça um programa que recebe a nota de 10 alunos e armazene as notas em um vetor. Calcule:

a - a média da classe

b - a quantidade de alunos aprovados, com média =7

c - a quantidade de alunos reprovados.*/

#include <stdio.h>
int main(){
	int notas[10];
	int i, aprovado=0, reprovado=0;
	float soma=0;

	for(i=1;i<=10;i++){
        printf("Digite a nota do aluno %d\n", i);
        scanf("%d", &notas[i]);
        soma=soma+notas[i];
        if (notas[i]<7){
            reprovado++;
        }
        if (notas[i]>7){
            aprovado++;
        }
	}
    printf("\nA media da turma eh %.2f", soma/10);
    printf("\nAlunos reprovados: %d", reprovado);
    printf("\nAlunos aprovados: %d", aprovado);

    return 0;
}


