//Questao 2

#include <stdio.h>
#include <stdlib.h>

int main(){

int maior, l, c, m[4][4], somai=0;
float mediab=0;

//a) Inserir automaticamente os valores indicados
for(l=0; l<4; l++){
    for(c=0; c<4; c++){
        m[l][c]=(l*4+c+1)*5;
    }
}
for(l=0; l<4; l++){
    for(c=0; c<4; c++){
        printf("%d  ", m[l][c]);
    }
    printf("\n");
}

//b) media elementos pares
for(l=0; l<4; l++){
    for(c=0; c<4; c++){
        if ((m[l][c]%2==0)&&(l==c)){
        	mediab=mediab+m[l][c];
		}
                
        }
    }

printf("Media matriz divisiveis por 2 %2.f\n ", mediab/4);

//c) soma elementos impares
for(l=0; l<4; l++){
    for(c=0; c<4; c++){
        if (m[l][c]%2!=0){
		somai=somai+m[l][c];
        }
    }

    printf("soma elementos impares %2.d\n ", somai);

    //d) maior valor na matriz
    maior=1;
    for(l=0;l<4;l++){
        for(c=0;c<4;c++){
            if(maior<m[l][c]){
                maior=m[l][c];
				}
    }}
    printf("Maior Elemento da Matriz: %d\n",maior);
    
    //f soma coluna
    for(c=0;c<4;c++){
        printf("Coluna %d: %d\n",c,somaColuna(m,c));
    }
    //g soma matriz
    printf("Soma da Matriz: %2.d\n", SomaMatriz(m));
    
    printf("Meridiane Schessoff Nunes");

}
}

//e) soma coluna
int somaColuna(int matriz[4][4],int col){
    int l, resp=0;
    for(l=0;l<4;l++){
        resp=resp+matriz[l][col];
    }
    return resp;
}

//f soma matriz
int SomaMatriz(int matriz[4][4]){
    int i, resp=0;
    for(i=0;i<4;i++){
        resp=resp+somaColuna(matriz,i);
    }
    return resp;}

