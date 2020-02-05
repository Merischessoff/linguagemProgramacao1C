/*Exercício 2 - Faça um programa que leia a matrícula do aluno (inteiro), quantidade de
faltas (inteiro), 4 notas (float) de um número indefinido de alunos e calcule a média final
deste aluno. ( Não use vetor! ). O programa deve encerrar quando for inserido o número de
matrícula 0 (zero).*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int matricula=0, faltas=0, cont=0;
    float n1=0, q=0, p1=0, p2=0, media=0, somanotas=0;

while (cont>=0) {
    printf("\nDigite a matricula do aluno: ");
    scanf("%d", &matricula);
    if(matricula==0) {break;}

    printf("\nDigite a nota 1, entrega dos exercicios (nota de 0 a 10), peso 1.");
    scanf("%f", &n1);

    printf("\nDigite a nota 2, e referente a realização dos questionários (nota de 0 a 10), peso 1.5.");
    scanf("%f", &q);

    printf("\nDigite a nota 3, e referente a primeira prova (nota de 0 a 10) peso 2.5.");
    scanf("%f", &p1);

    printf("\nDigite a nota 4, e referente a segunda prova (nota de 0 a 10) peso 5.");
    scanf("%f", &p2);

    printf("\nDigite as faltas: ");
    scanf("%d", &faltas);

    media=(n1+q*1.5+2.5*p1+5*p2)/10;

    /*Converter a média para conceitos de acordo com a tabela:
Se faltas forem maiores que 20 então reprovado por faltas (conceito E)
0~6.9: Conceito D - Reprovado;
7.0~8.0: Conceito C;
8,1~9.0: Conceito B;
9.1~10: Conceito A.*/

    if(faltas>20){ printf("\nReprovado por Faltas.");}
    if(media<7&&faltas<=20){ printf("\nConceito D");}
    if((media>6.9&&media<8.1)&&(faltas<=20)){printf("\nConceito C\n");}
    if((media>8&&media<9.1)&&(faltas<=20)){printf("\nConceito B\n");}
    if((media>9&&media<10.1)&&(faltas<=20)){printf("\nConceito A\n");}

    cont++;
    somanotas=somanotas+media;

    }

    printf("\nA media da turma e %2.f\n\n",somanotas/cont);

    printf("\n\nProgramador: Meridiane Schessoff Nunes\n");
    return 0;
}



