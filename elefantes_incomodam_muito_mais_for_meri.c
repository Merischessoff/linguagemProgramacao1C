#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{

int si, ne, i;

printf("1 elefante incomoda muita gente\n");

for(ne=2; ne<=10; ne++) {

printf("%d elefantes ", ne);

for(i=1; i<=ne+1; i++) {
if(i<ne) {
printf("incomodam, ");
}
if(i==ne){
printf("incomodam muito mais. ");
}
}

if (ne<10) {

printf("%d elefantes incomodam muita gente.\n", ne);

}

}

//Decremento começa aqui


for(ne=10;ne>0;ne--){
        printf("%d elefantes incomodam muita gente\n",ne);
        si++;
        ne--;
        if(ne>1){
            printf("%d elefantes ",ne);
            for(i=0;i<ne-1;i++){
                printf("incomodam, ");
                si++;
            }
            printf("incomodam muito menos\n");
            si++;
        } else{
            printf("1 elefante incomoda muito menos\n");
            si++;
        }
    }
    printf("\n\nIncomoda(m) foi impresso %d vezes.",si);
    return (EXIT_SUCCESS);
}
