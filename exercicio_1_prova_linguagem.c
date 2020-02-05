/*Exercício 01 - Campeonato: Faça um programa que leia a idade (inteiro) em anos e sexo
(inteiro, codificar: 0 para homens e 1 para mulheres) de um número indefinido de atletas. O
programa deve encerrar quando a idade informada for igual a zero . Informe para cada atleta
qual a categoria ele pertence e gere um relatório no final. Conforme abaixo:*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int idade=1, sexo=0, cont=0, masculinoinfa=0;
    int masculinojuva=0, masculinojuvb=0, masculinoadul=0;
    int femininoinf=0, femininojuv=0, femininoadul=0;

while (cont>=0) {
    //Loop infinito até digitar 0
    printf("\nDigite a idade do aluno: ");
    scanf("%d", &idade);
    if(idade==0) {break;}

    printf("\nDigite o sexo do aluno: ");
    scanf("%d", &sexo);
    //comparacoes comecam aqui
    if((idade<=10)&&(sexo==0)) {
        printf("\nCategoria:\n");
        printf("\nMasculino\n");
        printf("\nInfantil\n");
        masculinoinfa++;

    }
    else if((idade>10)&&(idade<14)&&(sexo==0)) {
        printf("\nCategoria:\n");
        printf("\nMasculino\n");
        printf("\nJuvenil A\n");
        masculinojuva++;
    }
    else if((idade>13)&&(idade<18)&&(sexo==0)) {
        printf("\nCategoria:\n");
        printf("\nMasculino\n");
        printf("\nJuvenil B\n");
        masculinojuvb++;

    }
     else if((idade>=18)&&(sexo==0)) {
        printf("\nCategoria:\n");
        printf("\nMasculino\n");
        printf("\nAdulto\n");
        masculinoadul++;

    }
    else if((idade<=12)&&(sexo==1)) {
        printf("\nCategoria:\n");
        printf("\nFeminino\n");
        printf("\nInfantil\n");
        femininoinf++;
    }
    else if((idade>12)&&(idade<18)&&(sexo==1)) {
        printf("\nCategoria:\n");
        printf("\nFeminino\n");
        printf("\nJuvenil\n");
        femininojuv++;
    }
    else if((idade>=18)&&(sexo==1)) {
        printf("\nCategoria:\n");
        printf("\nFeminino\n");
        printf("\nAdulto\n");
        femininoadul++;
    }
    cont++;
}
    // informacoes
printf("\nRelatorio do campeonato:\n");
printf("%d participantes masculinos infantil.\n", masculinoinfa);
printf("%d participantes masculinos juvenil A.\n", masculinojuva);
printf("%d participantes masculinos juvenil B.\n", masculinojuvb);
printf("%d participantes masculinos Adulto.\n", masculinoadul);
printf("%d participantes femininos infantil.\n", femininoinf);
printf("%d participantes femininos juvenil.\n", femininojuv);
printf("%d participantes femininos adulto.\n", femininoadul);
printf("\n\nProgramador: Meridiane Schessoff Nunes\n");

    return 0;
}


