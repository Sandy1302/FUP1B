#include<stdio.h>
int n1;
int n2;
int i;
int suma=0;
int main()
{
	printf("ingresa 2 muneros para poder multiplicarlos\n\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	for(i=1;i<=n2;i++)
	{
		suma=suma+n1;
	}
	printf("Tu resusltado es %d",suma);
}
