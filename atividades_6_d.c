/*4 - Leia o salário atual do funcionario e código da função. De acordo com a tabela abaixo, indique o novo salário.

Código - Cargo - Aumento
1 - Escriturário - 30%
2 - Secretário - 25%
3 - Caixa - 20%
4 - Gerente - 10%
5 - Diretor - Sem aumento

Indique uma mensagem de erro se o código não existir. Use o comando CASE.*/


#include <stdio.h>

int main(int argc, char** argv)
{
    float s;
    int c;

    printf("Digite o salário atual: ");
    scanf("%f", &s);

    printf("Digite o código ");
    scanf("%d", &c);

    switch (c) {

        case 1: printf("Escriturário %f", s * 0.3 + s); break;
        case 2: printf("Secretário %f", s * 0.25 + s); break;
        case 3: printf("Caixa %f", s * 0.2 + s); break;
        case 4: printf("Gerente %f", s * 0.1 + s); break;
        case 5: printf("Diretor %f", s); break;

        default: printf("Erro");
    }

    return 0;
}
