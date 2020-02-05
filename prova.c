/*Questão 1 - Pesquisa Eleitoral: Escreva um programa que leia:
! ano de nascimento,
! renda (inteiro: número de salários mínimos),
! escolaridade (codificação: 1 - fundamental incompleto; 2- fundamental completo; 3 - médio
completo; 4 superior completo).
! Voto para candidato (11 - Candidato A, 22 - Candidato B, 33 - Candidato C, 44 - Candidato D,
55 Candidato E) para 10 pessoas. (3pts)*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int i=1, ano=0, escolaridade=0, voto=0, a=0, b=0, c=0, d=0, e=0, itemb=0, itemc=0, idade=0;
float salario=0;

//a) Leitura correta dos dados e uso de laço. Apresentar para cada entrevistado, os dados lidos;
//Apresentar o total de votos para cada candidato; (1pt)

while (i<=10) {

printf("\nDigite o ano de nascimento ex.: 1991 \n ");
scanf("%d", &ano);

idade=2018-ano;

printf("Digite a sua renda ex. 1 para menos de 2 salario minimos, 2 para menos de 3 salarios e assim por diante \n");
scanf("%f", &salario);

printf("Digite a sua escolaridade ");
printf("codificacao:  1 - fundamental incompleto; 2- fundamental completo; 3 - medio completo; 4 superior completo \n");
scanf("%d", &escolaridade);

printf("Digite o seu voto: 11 - Candidato A, 22 - Candidato B, 33 - Candidato C, 44 - Candidato D, 55 Candidato E \n");
scanf("%d", &voto);

if (voto==11){a++;}
//b) Calcular quantos eleitores do Candidato B possuem renda maior que 5 salários e idade maior que 18 anos; (0,5pt)
else if (voto==22){b++; if (salario>5&&idade>18){ itemb++;} }
else if (voto==33){c++;}
else if (voto==44){d++;}
//c) Calcular quantos eleitores do Candidato E possuem renda menor que 3 salários mínimos e
//escolaridade fundamental incompleto; (0,5pt)
else{e++; if (salario<3&&escolaridade==1){itemc++;}}

i++;

}
printf("Votos para o candidato a %2.d \n ", a);
printf("Votos para o candidato b %2.d \n ", b);
printf("Votos para o candidato c %2.d \n ", c);
printf("Votos para o candidato d %2.d \n ", d);
printf("Votos para o candidato e %2.d \n ", e);
printf("Item b %2.d\n ", itemb);
printf("Item c %2.d\n ", itemc);
printf("Itemd testando.....%2.d \n", itemd(a,b,c,d,e));
printf("Vencedor.....%2.d \n", iteme(a,b,c,d,e));

printf("Meridiane Schessoff Nunes\n");
}
//d) Escreva uma função que recebe como parâmetro os valores A,B,C, D,E e retorne o maior valor. (0,5 pts)

int itemd(int a, int b, int c, int d, int e){
    if ((a>b)&&(a>c)&&(a>d)&&(a>e)){return a;}
    if ((b>a)&&(b>c)&&(b>d)&&(b>e)){return b;}
    if ((c>a)&&(c>b)&&(c>d)&&(c>e)){return c;}
    if ((d>a)&&(d>b)&&(d>c)&&(d>e)){return d;}
    if ((e>a)&&(e>b)&&(e>c)&&(e>d)){return e;}
}

//e) Escreva uma função que receba o quantitativo de votos de 5 candidatos, os votos devem ser
//informados pela ordem: A,B,C,D,E. A função deve escrever em tela qual é o candidato vencedor.
//(0,5pt)

int iteme(int a, int b, int c, int d, int e){
    int maior=a;
    if (maior<b) {
        maior=b;
    }
    else if (maior<c){
        maior=c;
    }
    else if (maior<d){
        maior=d;
    }
    else{maior=e;}

    return maior;

}
