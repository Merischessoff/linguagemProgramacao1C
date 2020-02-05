//questao 3

#include <stdio.h>
#include <stdlib.h>

float* itemB(float *a, float*b, float * c, float* d, float*e, float*f);
float itemC(float *a, float*b, float * c, float* d, float*e, float*f);
float itemD(float a, float b, float c, float d, float e, float f);

int main(int argc, char** argv) {
	//item a
    float a,b,c,d,e,f;
    printf("Digite o valor de a:");
    scanf("%f",&a);
    printf("Digite o valor de b:");
    scanf("%f",&b);
    printf("Digite o valor de c:");
    scanf("%f",&c);
    printf("Digite o valor de d:");
    scanf("%f",&d);
    printf("Digite o valor de e:");
    scanf("%f",&e);
    printf("Digite o valor de f:");
    scanf("%f",&f);
    printf("Variavel a: Endereco: %u Valor:%f\n",&a,a);
    printf("Variavel b: Endereco: %u Valor:%f\n",&b,b);
    printf("Variavel c: Endereco: %u Valor:%f\n",&c,c);
    printf("Variavel d: Endereco: %u Valor:%f\n",&d,d);
    printf("Variavel e: Endereco: %u Valor:%f\n",&e,e);
    printf("Variavel f: Endereco: %u Valor:%f\n",&f,f);
    
    printf("Endereco do Maior: %u\n",itemB(&a,&b,&c,&d,&e,&f));
    printf("Maior Valor: %f\n",itemC(&a,&b,&c,&d,&e,&f));
    printf("Maior Valor: %f\n",itemD(a,b,c,d,e,f));
    
    printf("Meridiane Schessoff Nunes");
    return (EXIT_SUCCESS);
}
//item b
float* itemB(float *a, float*b, float * c, float* d, float*e, float*f){
    float maior=*a;
    float *endResp=a;
    if(*b>maior){
        maior=*b;endResp=b;
    }
    if(*c>maior){
        maior=*c;endResp=c;
    }
    if(*d>maior){
        maior=*d;endResp=d;        
    }
    if(*e>maior){
        maior=*e;endResp=e;
    }
    if(*f>maior){
        maior=*f;endResp=f;
    }
    return endResp;
}

//item c

float itemC(float *a, float*b, float * c, float* d, float*e, float*f){
    float maior=*a;
    if(*b>maior)        maior=*b;    
    if(*c>maior)        maior=*c;
    if(*d>maior)        maior=*d;
    if(*e>maior)        maior=*e;
    if(*f>maior)        maior=*f;
    return maior;
}

//item d
float itemD(float a, float b, float c, float d, float e, float f){
    float maior;
    if ((a>b)&&(a>c)&&(a>d)&&(a>e)&&(a>f)){return a;}
    if ((b>a)&&(b>c)&&(b>d)&&(b>e)&&(b>f)){return b;}
    if ((c>a)&&(c>b)&&(c>d)&&(c>e)&&(c>f)){return c;}
    if ((d>a)&&(d>b)&&(d>c)&&(d>e)&&(d>f)){return d;}
    if ((e>a)&&(e>b)&&(e>c)&&(e>d)&&(e>f)){return e;}
    if ((f>a)&&(f>b)&&(f>c)&&(f>d)&&(f>e)){return f;}
}
