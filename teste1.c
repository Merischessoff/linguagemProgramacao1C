
#include <stdio.h>
#include <stdlib.h>


int main (int argc, char** argv) {
    float nota1, nota2, resp;
    printf("Digite a nota 1:");
    scanf("%f",&nota1);
    printf("Digite a nota 2:");
    scanf("%f",&nota2);
    resp=(nota1 + nota2)/2;
    printf("Resposta:%.f",resp);
    return 0;
}
