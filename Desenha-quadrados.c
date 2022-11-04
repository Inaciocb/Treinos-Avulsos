#include <stdio.h>

int main()
{
	int base, altura;
	printf("Informe: \nValor da base: ");
	scanf("%d", &base);
	printf("Altura: ");
	scanf("%d", &altura);

	void desenha();
	desenha(base, altura);
	
	printf("\n");
	return 0;
}

void desenha(int base, int altura)
{
	int i=0, j=0;
	char spc[base-2];
	
	for(i = 0; i < base-2; i++)
	{
		spc[i] = ' ';
	}
	for(i = 0; i < base; i++)
	{
		printf("#"); 
	}
	
	printf("\n");
	
	for(i = 0; i<altura-2; i++)
	{
		printf("#%s#", spc);
		printf("\n");
	}

	for(i = 0; i < base; i++)
	{
		printf("#"); 
	}
	printf("\n");
}
