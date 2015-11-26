#include<stdio.h>
char cadena[20];
int i,buscar,remplazar;
int main()
{
	printf("Ingresa una plalabra \n");
	scanf("%s",cadena);
	printf("Ingresa la letra que quieres cambiar\n");
	scanf(" %c",&buscar);
	printf("Ingresa la letra por la cual quieres cambiar\n");
	scanf(" %c",&remplazar);
	for(i=0; i<=20; i++)
	{
		if(cadena[i] == buscar)//==comparar
		{
			cadena[i] = remplazar;
		}
	}
	printf("%s",cadena);
}
