/*2​ - Escreva um programa que leia 5 valores ​float a,b,c,d, e (2,0pts)
a) criar 5 variáveis float e leia valores para cada uma. Mostre os endereços de memória ocupados por
estas variáveis (0,5pts)
b) Escreva uma função que recebe como parâmetro os ponteiros para float A,B,C, D, E e retorne o
ENDEREÇO ​da variável de maior​ valor. (0,5 pts)
c) Escreva uma função que recebe como parâmetro os ponteiros para float A,B,C, D, E e retorne o maior
valor. (0,5 pts)
d) Escreva uma função que recebe como parâmetro os valores A,B,C, D, E e retorne o menor​ valor. (0,5
pts)*/

#include <stdio.h>
#include <stdlib.h>

float* itemb(float *a, float *b, float *c, float *d, float *e);
float itemc(float *a, float *b, float *c, float *d, float *e);
float itemd(float a, float b, float c, float d, float e);

int main(int argc, char** argv) {
// a) criar 5 variáveis float e leia valores para cada uma. Mostre os endereços de memória ocupados por estas variáveis (0,5pts)
        float a, b, c, d, e, *pxa, *pxb, *pxc, *pxd, *pxe;

        pxa=&a;
        printf("Endereco de memoria da variavel a %u \n ", pxa);

        pxb=&b;
        printf("Endereco de memoria da variavel b %u \n ", pxb);

        pxc=&c;
        printf("Endereco de memoria da variavel c %u \n ", pxc);

        pxd=&d;
        printf("Endereco de memoria da variavel d %u \n ", pxd);

        pxe=&e;
        printf("Endereco de memoria da variavel e %u \n ", pxe);

        printf("Maior endereco de memoria %u \n", itemb(&a, &b, &c, &d, &e));

    a=10.5;
    b=15.6;
    c=25.7;
    d=50.8;
    e=125.7;

    printf("Maior valor dentro das variaveis %2.f \n", itemc(&a, &b, &c, &d, &e));

    printf("Menor valor dentro das variaveis %2.f \n", itemd(a, b, c, d, e));

    return 0;
}

//b) Escreva uma função que recebe como parâmetro os ponteiros para float A,B,C, D, E e retorne o ENDEREÇO ​da variável de maior​ valor. (0,5 pts)

float* itemb(float *a, float *b, float *c, float *d, float *e){
    float *maior;
    if ((*a > *b) && (*a > *c) && (*a> *d) && (*a> *e)) {
        *maior=*a;}
    if ((*b > *a) && (*b > *c) && (*b> *d) && (*b> *e)) {
        *maior=*b;}
    if ((*c > *a) && (*c > *b) && (*c> *d) && (*c> *e)) {
        *maior=*c;
    if ((*d > *a) && (*d > *b) && (*d> *c) && (*d> *e)) {
        *maior=*d;}
    if ((*e > *a) && (*e > *b) && (*e> *c) && (*e> *d)) {
        *maior=*e;}
    return maior;
}
}
//c) Escreva uma função que recebe como parâmetro os ponteiros para float A,B,C, D, E e retorne o maior valor. (0,5 pts

float itemc(float *a, float *b, float *c, float *d, float *e){
    float maior=*a;
    if(*b>maior) maior=*b;
    if(*c>maior) maior=*c;
    if(*d>maior) maior=*d;
    if(*e>maior) maior=*e;
    return maior;
}

//d) Escreva uma função que recebe como parâmetro os valores A,B,C, D, E e retorne o menor​ valor. (0,5 pts)*/

float itemd(float a, float b, float c, float d, float e){
    float menor;
    if((a<b) && (a<c) && (a<d) && (a<e)) menor=a;
    if((b<a) && (b<c) && (b<d) && (b<e)) menor=b;
    if((c<a) && (c<b) && (c<d) && (c<e)) menor=c;
    if((d<a) && (d<b) && (d<c) && (d<e)) menor=e;
    if((e<a) && (e<b) && (e<c) && (e<d)) menor=e;
    return menor;
}
