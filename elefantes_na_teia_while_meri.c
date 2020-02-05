#include<stdio.h>

int main(){

int contador=1;
int elefantes;

    printf("Escreva o número máximo de elefantes que se balançam na teia da aranha: ");
    scanf("%d", elefantes);

    printf("1 elefante se balaçava numa teia de aranha.\n ");
    printf("Mas como a teia não arrebentou, foi chamar outro elefante.\n");

while(contador>=elefantes){
    printf("%d elefante se balaçava numa teia de aranha.\n ", elefantes);
    printf("Mas como a teia não arrebentou, foi chamar outro elefante.\n");
    contador++;
}

return 0;

}



