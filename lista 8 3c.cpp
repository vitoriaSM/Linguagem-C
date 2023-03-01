#include<stdio.h>
#include<conio.h>

float rotcalculo(float *va, int *t, float *ta, float *p);

int main()
{
	int t;
	float p, va, ta;
	printf ("------Calculo Prestacao-------");
	printf("\nDigite o valor da prestacao em atraso:");
	scanf("%f", &va);
	printf("Digite a taxa:");
	scanf("%f", &ta);
	printf("Digite o tempo que a prestacao está em atraso:");
	scanf("%i", &t);
	rotcalculo(&va, &t, &ta, &p);
	printf("\nA novo valor da prestacao eh: %.2f", p);
}


float rotcalculo(float *va, int *t, float *ta, float *p)
{
	*p=*va+(*va*(*ta/100)**t);
}

