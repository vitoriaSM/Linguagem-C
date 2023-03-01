#include <stdio.h>
#include <conio.h>

int calculo(int *s, int *i, int *n);

int main()
{int n, i=1,s=0;
	printf("Digite o numero para o calculo da somatoria:\n");
	scanf("%i", &n);
	calculo(&s, &i, &n);
 	printf ("A somatoria de %i = %i ", n, s);
}

int calculo(int *s, int *i, int *n)
{
	while (*i<=*n)
	{
	*s=*s+*i;
	*i=*i+1;}
 } 
 
