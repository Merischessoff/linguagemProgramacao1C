/*1 - Faça um programa que código de origem de um produto e imprima a procedência, de acordo com a tabela:

Codigo de origem Procedencia
1 Sul
2 Norte
3 Leste
4 Oeste
5 ou 6 Nordeste
7, 8, ou 9 Sudeste
10 a 12 Centro-oeste
21 a 22 Noroeste*/

#include <stdio.h>

int main(void)
{
    int cod;
    
    printf("Digite o código de procedência:\n");
    scanf("%d", &cod);
    
    switch (cod) {
        case 1:
        printf("Sul");
        break;
        
        case 2:
        printf("Norte");
        break;
        
        case 3:
        printf("Leste");
        break;
        
        case 4:
        printf("Oeste");
        break;
        
        case 5: case 6:
        printf("Nordeste");
        break;
        
        case 7: case 8: case 9:
        printf("Sudeste");
        break;
        
        case 10: case 11: case 12:
        printf("Centro-oeste");
        break;
        
        case 21: case 22:
        printf("Noroeste");
        break;
    }

    return 0;
}
