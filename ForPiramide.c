#include<stdio.h>
int final;
int i;
int j;
int main()
{
	printf("programa que repite la cantidad de numeros que le pides\n");
	printf("dame un numero\n");
	scanf("%d",&final);
	
	i=1;
	for(i=1; i<=final; i++)
	{
		for(j=i; j<=i; i++)
		{
			printf("%d",i);
		}
		
		printf("\n");
	}
}
