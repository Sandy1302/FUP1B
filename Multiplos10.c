#include<stdio.h>
int multiplos[10];
int i;
int a;
int main()
{
	printf("Ingresa un numero y te digo sus primeros 10 Multiplos\n");
	scanf("%d",&a);
	
	for (i=0; i<10; i++)
	{
		multiplos[i]=a*(i+1);
	}	
	for (i=0; i<10; i++)
	{
		printf("%d\n",multiplos[i]);
	}
}
