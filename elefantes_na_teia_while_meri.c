#include<stdio.h>

int main(){

int contador=1;
int elefantes;

    printf("Escreva o n�mero m�ximo de elefantes que se balan�am na teia da aranha: ");
    scanf("%d", elefantes);

    printf("1 elefante se bala�ava numa teia de aranha.\n ");
    printf("Mas como a teia n�o arrebentou, foi chamar outro elefante.\n");

while(contador>=elefantes){
    printf("%d elefante se bala�ava numa teia de aranha.\n ", elefantes);
    printf("Mas como a teia n�o arrebentou, foi chamar outro elefante.\n");
    contador++;
}

return 0;

}



