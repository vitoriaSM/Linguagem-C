#include<stdio.h>
#include<conio.h>
#include<math.h>

int rotcalculo(int *x, int *y, int *z);

int main ()
{ 
 int x, y, z;
 printf ("-----Calculo com Potencia-----");
 printf ("\nDigite o valor da BASE:");
 scanf ("%i", &x);
 printf ("\nDigite o valor do EXPOENTE:");
 scanf ("%i", &y);
 rotcalculo(&x, &y, &z);
 printf ("\nO valor do calculo eh: %i", z);
}

int rotcalculo(int *x, int *y, int *z)
{
	*z=pow(*x,*y);
}

