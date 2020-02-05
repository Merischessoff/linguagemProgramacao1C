#include <stdio.h>
#include <stdlib.h>

float calculaItem(int, int);
int lerQtde();
int lerItem();

int main(int argc, char** argv) {
    char opcao;
    int item, qtde;
    float totalDia=0, totalPedido=0;
    while(opcao!='E'){
        //incluir codigo para imprimir as opcoes
        printf("Digite sua Opcao: ");
        scanf("%c",&opcao);
        switch(opcao){
            case 'A':   totalPedido=0;break;
            case 'B':   item=lerItem();
                        qtde=lerQtde();
                        totalPedido=totalPedido+calculaItem(item,qtde);
                        printf("Total do item: R$%.2f\n", calculaItem(item,qtde));
                        break;
            case 'C':   printf("Total do Pedido: R$%.2f",totalPedido); break;
            case 'D':   printf("Total do Dia: R$%.2f",totalDia); break;
        }
    }
    return (EXIT_SUCCESS);
}
int lerItem(){
    //incluir codigo para escrever os itens do Menu e respectivos codigos
    int codigo;
    printf("Digite o codigo do item desejado: ");
    scanf("%d",&codigo);
    return codigo;
}
int lerQtde(){
    int itens;
    printf("Digite a quantidade solicitada: ");
    scanf("%d",&itens);
    return itens;
}
float calculaItem(int codigo, int qtde){
    switch(codigo){
        case 100: return 11*qtde; break;
        case 101: return 13*qtde; break;
        case 102: return 15*qtde; break;
        case 103: return 11*qtde; break;
        case 104: return 13*qtde; break;
        case 105: return 3*qtde; break;
        default: return 0; break;
    }
}
