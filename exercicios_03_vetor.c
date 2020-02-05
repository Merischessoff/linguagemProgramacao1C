#include<stdio.h>
#include<stdlib.h>

int main(void){
float i, j, x[10];
int t;
for(t=1; t<=10; t++){
printf("Digite 2 numeros \n");
scanf("%f", &i);
scanf("%f", &j);
x[t]=i*j;}

for(t=1; t<=10; t++){
printf("Multiplicacoes %2.f \n", x[t]);
}

return 0;

}
