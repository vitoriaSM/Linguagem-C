#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int i, a[30], b[30], c[60];
int rotleituraA();
int rotleituraB();
int rotjuncao();
int rotexibicaoC();

int main ()
{
int c[60], i;
rotleituraA();
rotleituraB();
rotjuncao();
rotexibicaoC();
for (i=0; i<=59; i++){
printf ("Matriz C por referencia: %i\n", c[i]);}
}

int rotleituraA()
{
	for (i=0; i<=29; i++)
	{
	printf("Digite os valores da Matriz A:");
	scanf ("%i", &a[i]);
	}
}
int rotleituraB()
{
	for (i=0; i<=29; i++)
	{
	printf ("Digite os valores da Matriz B:");
	scanf ("%i", &b[i]);
	}
}
int rotjuncao()
{
for (i=0; i<=59; i++)
{
	c[i]==a[i];
	c[i]==b[i];}
}
int rotexibicaoC()
{
	for (i=0; i<=59; i++){
	printf ("Matriz C: %i\n", c[i]);}
}
