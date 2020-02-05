

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3],i,j,menor,maior,media=0,somal1=0, produtod=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           scanf("%d",&m[i][j]);
           printf("%d",m[i][j]);

           if (i == 0 && j == 0){
               menor=m[0][0];
               maior=m[0][0];
           }
           if(m[i][j]<menor){
            menor=m[i][j];
           }
           if(m[i][j]>maior){
            maior=m[i][j];
           }

           media=media+m[i][j];

           if (i=0 && j=0){
            somal1=somal1+m[i][j];}

           if (i=0 && j=1){
            somal1=somal1+m[i][j];}

            if (i=0 && j=2){
            somal1=somal1+m[i][j];}

           if (j = i){
            produtod=produtod * m[i][j];
           }

        }
    }
    media=media/9;
    printf("O menor numero e: [%d]\n",menor);
    printf("O maior numero e: [%d]\n",maior);
    printf("A media dos números e: [%d]\n", media);
    printf("A soma da linha 1 e: [%d]\n", somal1);
    printf("O produto da linha diagonal e: [%d]\n", produtod);

    return 0;

    }


