#include<stdio.h>
#include<stdlib.h>

int vet[10];
//a-Crie uma função que recebe dois inteiros como parâmetros e devolva a media aritmética destes números (float);

float media2(int a, int b){
    return (a+b)/2.0; ;
}

//b - Crie um vetor global de inteiros com 10 posições. Crie uma função sem retorno que recebe como parâmetro o
//índice (numero de 0 a 9) do vetor a ser alterado. Dentro da função deve ser lido um valor inteiro e armazenado na posição definida.


int indice(int i){
    return vet[i]=10;
}


//c -Crie uma função que recebe um ponteiro para inteiro como parâmetro e altere o valor desta variável para zero.

int pont0(int *p){
    return *p=0;
}

//d - Crie outra função que recebe dois ponteiros para inteiros como parâmetro e que realize a troca dos valores.

int trocarpont(int *p, int *p2){
    int aux;
    aux=*p;
    *p=*p2;
    *p2=aux;
    return *p, *p2;
}

//e- Crie outra função que recebe um ponteiro para inteiro e um inteiro e atribua o valor do inteiro dentro da da variável apontada pelo ponteiro.

int pontloco(int *p, int a){
    *p=a;
    return *p;
}

//f - Crie uma função que receba como parâmetro 3 variáveis inteiras e devolva o maior valor

int maior(int a, int b, int c){
    if ((a>b)&&(a>c)) return a;
    if ((b>a)&&(b>c)) return b;
    if ((c>a)&&(c>b)) return c;
}

//g - Crie uma função que receba como parâmetro 3 ponteiros para inteiro e devolva um ponteiro que aponte para a variável de maior valor;

int *PtrMaior(int *x, int *y, int *z){
	int *resp;
	resp = x;
	if(*resp < *y) resp=y;
	if(*resp < *z) resp=z;
	return resp;
}

	/*1 - Crie um programa que demonstre o funcionamento das funções acima, demonstrando que elas funcionam para diversos parâmetros
	(números positivos, negativos, pequenos, grandes, etc.) • Por exemplo: a função em a, deve retornar a media aritmética de dois
	números, portanto se eu chamar a função media(4,2) o retorno deve ser 3. Então é possível verificar se if(media(4,2)==3))
	printf(“A Media deu certo"); else printf(“a Media deu errado");*/

	int main(){
        int num1, num2,i, *p, *p2, *p3, x, b;
        float media;
        num1=5;
        num2=7;
        media=media2(num1,num2);

        if (media==6){
            printf("A media eh %2.f\n", media);}
        else {printf("Ta errado isso!!!\n\n");}


        i=6;

        printf("Definindo a posicao do valor do vet[10]\n");

        indice(i);

        printf("O valor do Vet na posicao %d ", i);
        printf("eh %d\n ",vet[i]);

        x=5;
        p=&x;
        pont0(p);

        printf("O valor de x alterado pelo ponteiro eh %d\n", x);

        x=8;
        i=10;
        p=&x;
        p2=&i;

        trocarpont(p,p2);

        printf("Valor apontado em p eh %d\n", *p);

        printf("Valor apontado em p2 eh %d\n", *p2);

        x=2;
        p=&x;
        i=20;

        pontloco(p,i);

        printf("O valor da variavel x era 2 atravez de *p ela recebeu o valor %d\n", x);

        x=3;
        i=10;
        b=8;

        printf("O maior numero eh %d\n", maior(x,i,b));
        p=&x;
        p2=&i;
        p3=&b;

        printf("Maior ponteiro %d\n", *PtrMaior(p,p2,p3));


	}







