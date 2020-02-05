#include <stdio.h>
int main(){
    int x, *px; // declaração de variáveis e ponteiro
    x=1; // atribuição do valor 1 à variável x
    px=&x; // atribuição do endereço de memória da variável x ao ponteiro
    printf("x=%d\n",x); // imprimi o valor de x
    printf("px=%u\n",px); // imprimi o endereço de memória de x
    printf("*px+1=%d\n",*px+1); // imprimi o valor da variável x + 1
    printf("px=%u\n",px); // imprimi o endereço de memória de x
    printf("*px=%d\n", *px); // imprimi o valor da variavel x
    printf("*px+=1=%d\n",*px+=1); // imprimi o valor da variavel x +1
    printf("px=%u\n",px); // imprimi o endereço de memória de x
    printf("(*px)++=%d\n",(*px)++); // Aqui o conteúdo da variável px é incrementada
    printf("px=%u\n",px); // imprimi o endereço de memória de x

    // apartir daqui é dúvida
    printf("*(px++)=%d",*(px++)); // atribui a uma variável x o conteúdo do primeiro inteiro adiante daquele apontado por px
    printf("px=%u\n", px); // imprimi o endereço de memória de x
    printf("*px++-=%d\n",*px++); // atribui a uma variável x o conteúdo do primeiro inteiro adiante daquele apontado por px
    printf("px=%u\n",px); // imprimi o endereço da variável
}



