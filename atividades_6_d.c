/*4 - Leia o sal�rio atual do funcionario e c�digo da fun��o. De acordo com a tabela abaixo, indique o novo sal�rio.

C�digo - Cargo - Aumento
1 - Escritur�rio - 30%
2 - Secret�rio - 25%
3 - Caixa - 20%
4 - Gerente - 10%
5 - Diretor - Sem aumento

Indique uma mensagem de erro se o c�digo n�o existir. Use o comando CASE.*/


#include <stdio.h>

int main(int argc, char** argv)
{
    float s;
    int c;

    printf("Digite o sal�rio atual: ");
    scanf("%f", &s);

    printf("Digite o c�digo ");
    scanf("%d", &c);

    switch (c) {

        case 1: printf("Escritur�rio %f", s * 0.3 + s); break;
        case 2: printf("Secret�rio %f", s * 0.25 + s); break;
        case 3: printf("Caixa %f", s * 0.2 + s); break;
        case 4: printf("Gerente %f", s * 0.1 + s); break;
        case 5: printf("Diretor %f", s); break;

        default: printf("Erro");
    }

    return 0;
}
