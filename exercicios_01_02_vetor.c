#include<stdio.h>
#include<stdlib.h>

int main(void){
int x[10];
int t;
for(t=1; t<=10; t++){
printf("Digite um numero:" );
scanf("%d",&x[t]);}

for(t=10; t>=1; t--){
printf("\nOrdem inversa %d", x[t]);
}
return 0;

}
