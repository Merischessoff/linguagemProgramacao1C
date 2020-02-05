#include <stdio.h>

// imprime triângulo de floyd até linha N
void mostrar_triangulo(int N)
{
	if(N < 1)
		return;

	int i = 0, qte = 1, num = 1;

	while(i < N)
	{
		int j;
		for(j = 0; j < qte; j++)
		{
			printf("%d\t", num);
			num++;
		}
		printf("\n");
		qte++;
		i++;
	}
}

int main(int argc, char *argv[])
{
	mostrar_triangulo(10);
	return 0;
}
