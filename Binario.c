#include<stdio.h>
int binario[100];
int j=0;
int i=0;
int x;
int main()
{
	printf("Ingresa un numero y lo convierto a binario\n");
	scanf("%d",&x);
	
	for (j=0; j<=99; j++)
	{
		binario[j]=x % 2;
		x=x/2;
	}
	for (i=9; i>=0; i--)
	printf("%d",binario[i]);
}
