#include <stdio.h>

int main(){
    int x, *px, *py;
    x=9;
    px=&x;
    py=px;
    printf("x= %d\n", x);
    printf("&x= %d\n", &x);
    printf("px= %d\n", px);
    printf("*px= %d\n", *px);
    printf("*px= %d\n", *py);
}

/*Imprimi na tela
x=9
&x=2686740
px=2686740
*px=9
*px=9*/
