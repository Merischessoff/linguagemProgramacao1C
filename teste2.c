
#include <stdio.h>
#include <stdlib.h>


int main (int argc, char** argv) {
    float nota1, nota2, nota3, nota4, resp;
    printf("Digite a nota 1:");
    scanf("%f",&nota1);
    printf("Digite a nota 2:");
    scanf("%f",&nota2);
    printf("Digite a nota 3:");
    scanf("%f",&nota3);
    printf("Digite a nota 4:");
    scanf("%f",&nota4);
    resp=(nota1*3 + nota2*2 + nota3*4 + nota4*5)/4;
    printf("Resposta:%.f",resp);
    return 0;
}
