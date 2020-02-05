
#include <stdio.h>
#include <stdlib.h>

int idade (int nasc, int corr){
    return corr-nasc;
}

float imc(float peso, float alt){
    return (peso/(alt*alt));
}

void classif(float imc){
    if(imc<17) printf("Muito Abaixo do Peso.\n");
    else if(imc<18.5)printf("Abaixo do Peso.\n");
    else if(imc<25)printf("Peso Normal.\n");
    else if(imc<30)printf("Acima do Peso.\n");
    else if(imc<35)printf("Obesidade I.\n");
    else if(imc<40)printf("Obesidade II.\n");
    else printf ("Obesidade III.\n");
}



int main(int argc, char** argv) {
    float peso, alt,pesototal=0,alturatotal=0;
    int ano, cont;
    for(cont=0;cont<5;cont++){
        printf("Digite seu ano de nascimento: ");
        scanf("%d",&ano);
        printf("Digite seu peso: ");
        scanf("%f",&peso);
        printf("Digite sua altura: ");
        scanf("%f",&alt);
        pesototal=pesototal+peso;
        alturatotal=alturatotal+alt;
        printf("\nVoce completara %d anos.\n", idade(ano,2018));
        printf("Seu IMC: %.2f - ",imc(peso,alt));
        classif(imc(peso,alt));
    }
    printf("Peso Total: %f\n",pesototal);
    printf("Altura Media: %.2f",alturatotal/5);
    return (EXIT_SUCCESS);
}
