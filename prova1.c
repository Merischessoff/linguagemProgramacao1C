/*Questão 1 */

#include <stdio.h>
#include <stdlib.h>

int main(){

int i=1, voto=0, a=0, b=0, c=0, d=0, e=0, nulos=0;

//item a

while (i>0) {

printf("Digite o seu voto: 111 - Candidato A, 222 - Candidato B, 333 - Candidato C, 444 - Candidato D, 555 Voto em branco \n");
scanf("%d", &voto);

if (voto==0){break;}
else if (voto==111){a++;}
else if (voto==222){b++;}
else if (voto==333){c++;}
else if (voto==444){d++;}
else if (voto==555){e++;}
else{nulos++;}

i++;

}

//item b
printf("Votos para o candidato a %2.d \n ", a);
printf("Votos para o candidato b %2.d \n ", b);
printf("Votos para o candidato c %2.d \n ", c);
printf("Votos para o candidato d %2.d \n ", d);
printf("Votos em brancos %2.d \n ", e);
printf("Votos Nulos %2.d \n", nulos);
printf("Testando funcao candidato vencedor %c \n", itemc(a,b,c,d));


printf("Meridiane Schessoff Nunes\n");
}

//c

int itemc(int a, int b, int c, int d){
    int maior=a;
    char vencedor;
    if (maior==a) {
        maior=a;
        vencedor='a';
    }
    
    if (maior<b) {
        maior=b;
        vencedor='b';
    }
    if (maior<c){
        maior=c;
        vencedor='c';
    }
    if (maior<d) {
        maior=d;
        vencedor='d';
        
    }

    return vencedor;

}
