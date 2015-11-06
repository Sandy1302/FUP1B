#include<stdio.h>
int n;
int i;
int res;
int main()
{
	printf("ingresa un numero de 4 digitos y lo divido en unidades...\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		res= n % 10;
		n=n/10;
		printf("Digitos: %d\n",res);
	}
}
