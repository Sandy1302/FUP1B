#include<stdio.h>
char cadena[40];
char subcadena[40];
int a=0;
int j=0;
int i;
int main()
{
	printf("Ingresa una plalabra\n");
	scanf("%s",cadena);
	printf("Ingresa alguna palabra que este dentro de tu plabra\n");
	scanf(" %c",subcadena);
	while(cadena[a] != '\0')
	{
		a++;
		while(subcadena[j] != '\0')
		{
			j++;
			if(a<=j)
	{
		for (i=0; i<=a; i++)
		{
			if(cadena[a] == subcadena[j] && subcadena[j] != '\0')
			i++;
		}
		if(i==a)
		{
			printf("la cadena si existe%c", subcadena);
		}
		else
		{
			printf("la cadena no existe");
		}
	}
	else
	{
		printf("nop la cadena no existe");
	}
		}
	}
	
	
}
