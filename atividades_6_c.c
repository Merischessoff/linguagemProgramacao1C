/*3 - O cardápio de uma lancheria é o seguinte:

Código do lanche Especificação Preço unitário
100 Cachorro quente 5,00
101 Bauru simples 6,00
102 Bauru c/ovo 8,00
103 Hamburger 5,00
104 Cheeseburger 7,50
105 Refrigerante 2,00
Escrever um programa que leia o código do item
pedido, a quantidade e calcule o valor a ser pago
por aquele  lanche. Considere que a cada execução
somente será calculado  um item.Use Case.*/

#include <stdio.h>

int main(void)
{
    int cod;
    float quant;
    
    printf("Digite o código do lanche: ");
    scanf("%d", &cod);

    printf("Digite a quantidade: ");
    scanf("%f", &quant);
    
    switch(cod) {

    case 100: printf("O valor total é: %f", quant * 5); break;

    case 101: printf("O valor total é: %f", quant * 6); break;

    case 102: printf("O valor total é: %f", quant * 8); break;
    
    case 103: printf("O valor total é: %f", quant * 5); break;
    
    case 104: printf("O valor total é: %f", quant * 7.5); break;
    
    case 105: printf("O valor total é: %f", quant * 2); break;
    

    }

    return 0;
}
