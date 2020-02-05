#include <stdio.h>
int main(){
    int x, *px; // declara��o de vari�veis e ponteiro
    x=1; // atribui��o do valor 1 � vari�vel x
    px=&x; // atribui��o do endere�o de mem�ria da vari�vel x ao ponteiro
    printf("x=%d\n",x); // imprimi o valor de x
    printf("px=%u\n",px); // imprimi o endere�o de mem�ria de x
    printf("*px+1=%d\n",*px+1); // imprimi o valor da vari�vel x + 1
    printf("px=%u\n",px); // imprimi o endere�o de mem�ria de x
    printf("*px=%d\n", *px); // imprimi o valor da variavel x
    printf("*px+=1=%d\n",*px+=1); // imprimi o valor da variavel x +1
    printf("px=%u\n",px); // imprimi o endere�o de mem�ria de x
    printf("(*px)++=%d\n",(*px)++); // Aqui o conte�do da vari�vel px � incrementada
    printf("px=%u\n",px); // imprimi o endere�o de mem�ria de x

    // apartir daqui � d�vida
    printf("*(px++)=%d",*(px++)); // atribui a uma vari�vel x o conte�do do primeiro inteiro adiante daquele apontado por px
    printf("px=%u\n", px); // imprimi o endere�o de mem�ria de x
    printf("*px++-=%d\n",*px++); // atribui a uma vari�vel x o conte�do do primeiro inteiro adiante daquele apontado por px
    printf("px=%u\n",px); // imprimi o endere�o da vari�vel
}



