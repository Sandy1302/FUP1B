#include<stdio.h>
int numero;
int i;
int main()
{
	printf("ingresa cualquier numero\n");
	scanf("%d",&numero);
	while(i<=numero)
	{
		printf("%d\n",i);
		i=i+1;
	}
}
