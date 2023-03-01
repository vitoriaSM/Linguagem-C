#include<stdio.h>
#include<conio.h>

int a[12], b[12], c[12], x, j, i;
int leituraAeB();
int ordenacaoAeB();
int juncaoC();
int ordenacaoC();

int main()
{
 int a[12], b[12], c[12], i;
 for (i=0; i<=11; i++){
 printf ("Digite os valores da Matriz A:");
 scanf ("%i", &a[i]);
 printf ("Digite os valores da Matriz B:");
 scanf ("%i", &b[i]);}
 ordenacaoAeB();
 juncaoC();
 ordenacaoC();
 for (i=0; i<=11; i++){
 printf ("\n\nOs valores da Matriz C em ordem crescente sao: %i", c[i]);}
}

int ordenacaoAeB()
{
	for (i=0; i<=11; i++) 
	for (j=i+1; j<=11; j++)
	{
	if (a[i]>a[j])
	{
	x=a[i];
	a[i]=a[j];
	a[j]=x;
	}
	}
	for (i=0; i<=11; i++)
	{
	printf ("\nOs valores da Matriz A em ordem crescente sao: %i", a[i]);}
	
	for (i=0; i<=11; i++) 
	for (j=i+1; j<=11; j++)
	{
	if (b[i]>b[j])
	{
	x=b[i];
	b[i]=b[j];
	b[j]=x;}}
	for (i=0; i<=11; i++)
	{
	printf ("\nOs valores da Matriz B em ordem crescente sao: %i", b[i]);}
}

int juncaoC(){
for (i=0; i<=11; i++){
c[i]=a[i]+b[i];}}

int ordenacaoC()
{
	for (i=0; i<=11; i++) 
	for (j=i+1; j<=11; j++)
	{
	if (c[i]>c[j])
	{
	x=c[i];
	c[i]=c[j];
	c[j]=x;}}
}


