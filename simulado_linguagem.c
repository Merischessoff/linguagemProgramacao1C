/*Questão 1 (5pts): Fazer um programa que cria uma matriz 5 X 5 e efetue as seguintes operações:
a) Inserir automaticamente os valores indicados abaixo, na matriz (isto é, o usuário não precisa
editar). Obrigatório uso de laço;
b) Calcular e apresentar Soma dos elementos divisíveis por 3 ​da diagonal SECUNDÁRIA.
Obrigatório usar repetição.
c) Calcular e apresentar Soma de todos os elementos ímpares​ (usar repetição)
d) Buscar na matriz qual o maior valor, apresentar o maior valor;
e) Definir uma função que recebe uma matriz como parâmetro e o número da coluna; a função
deve calcular a soma da coluna indicada e retornar o valor;
f) Usando laço e a função definida no item "e", apresentar a soma para cada coluna;
g) Definir função que calcula a soma de toda a matriz; a função deverá fazer uso da função definida
no item "e";
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int m[5][5];
    int l,c,maior,itemB=0,somaI=0;

    //item A
    for(l=0;l<5;l++){
        for(c=0;c<5;c++){
            m[l][c]=l*5+c+1;
            printf("%2d\t",m[l][c]);
        }
        printf("\n");
    }
    //item B
    for(l=0;l<5;l++){
        if(m[l][5-l-1]%3==0){
            itemB=itemB+m[l][5-l-1];
        }}
    printf("Resp Item B: %d\n",itemB);
    //item C
    for(l=0;l<5;l++){
        for(c=0;c<5;c++){
            if(m[l][c]%2==1){
                somaI=somaI+m[l][c];
    }}}
    printf("Soma dos Impares: %d\n",somaI);
    //item D - Maior valor
    maior=m[l][c];
    for(l=0;l<5;l++){
        for(c=0;c<5;c++){
            if(maior<m[l][c])
                maior=m[l][c];
    }}
    printf("Maior Elemento da Matriz: %d\n",maior);
    //item F
    for(c=0;c<5;c++){
        printf("Coluna %d: %d\n",c,somaColuna(m,c));
    }
    printf("Soma da Matriz: %d",SomaMatriz(m));
    return (EXIT_SUCCESS);
}

//item E
int somaColuna(int matriz[5][5],int col){
    int l, resp=0;
    for(l=0;l<5;l++){
        resp=resp+matriz[l][col];
    }
    return resp;
}

//item G
int SomaMatriz(int matriz[5][5]){
    int i, resp=0;
    for(i=0;i<5;i++){
        resp=resp+somaColuna(matriz,i);
    }
    return resp;
}

