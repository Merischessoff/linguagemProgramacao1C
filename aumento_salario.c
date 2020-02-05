#include <stdio.h>
#include <stlib.h>

int main()
{

float salarioatual, salarionovo;
char criterio;

printf ("Digite o salário atual: ");
scanf ("%f", &salarioatual);

printf ("Digite o critério a,b,c ou d");
scanf ("%c", &criterio);

switch (criterio) {

    case 'a':
    salarionovo = ((salarioatual * 0.20) + salarioatual);
    printf ("\nO salário antes do reajuste %.2f", salarioatual);
    printf ("\nO percentual de aumento aplicado é de 20%");
    printf ("\nO valor do aumento %.2f", salarioatual * 0.20);
    printf ("\nO novo salário após o aumento %.2f", salarionovo);
    break;

    case 'b':
    salarionovo = ((salarioatual * 0.15) + salarioatual);
    printf ("\nO salário antes do reajuste %.2f", salarioatual);
    printf ("\nO percentual de aumento aplicado é de 15%");
    printf ("\nO valor do aumento %.2f", salarioatual * 0.15);
    printf ("\nO novo salário após o aumento %.2f", salarionovo);
    break;

    case 'c':
    salarionovo = ((salarioatual * 0.10) + salarioatual);
    printf ("\nO salário antes do reajuste %.2f", salarioatual);
    printf ("\nO percentual de aumento aplicado é de 10%");
    printf ("\nO valor do aumento %.2f", salarioatual * 0.10);
    printf ("\nO novo salário após o aumento %.2f", salarionovo);
    break;

    case 'd':
    salarionovo = ((salarioatual * 0.05) + salarioatual);
    printf ("\nO salário antes do reajuste %.2f", salarioatual);
    printf ("\nO percentual de aumento aplicado é de 5%");
    printf ("\nO valor do aumento %.2f", salarioatual * 0.05);
    printf ("\nO novo salário após o aumento %.2f", salarionovo);
    break;
    }

    return 0;
}
