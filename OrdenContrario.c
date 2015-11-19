#include<stdio.h>
int numero[10];
int i;
int main()
{
	printf("Ingresa los numeros que gustes y te los ordeno al contrario\n");
	
	for (i=0; i<10; i++)
	{
		scanf("%d",&numero[i]);
	}
	
	for (i=9; i>=0; i--)
	printf("%d\n",numero[i]);
}
