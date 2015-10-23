#include<stdio.h>
int kilos;
int ropa;
int main()
{
	printf("Bienvenidos\nLavadora Lava Mash\n");
	printf("ingresa la cantidad de ropa que quieres lavar\n");
	scanf("%d",&kilos);
	if(kilos>=0 && kilos<=20)
{
	if(kilos>=0 && kilos<=10)
	{
		printf("Nivel minimo de agua\n");
	}
	else
	{
		if(kilos>=11 && kilos<=15)
		{
			printf("Nivel medio de agua\n");
		}
		else
		{
			if(kilos>=16 && kilos<=20)
			{
				printf("Nivel maximo de agua\n");
			}
		}
	}
	printf("\nEscoge el ciclo de lavado de tu ropa\n1 Delicada\n2 Normal\n3 Sucia\n");
	scanf("%d",&ropa);
	if(ropa>=1 && ropa<=3)
	{
		if(ropa<2)
		{
			printf("Lavar por 5 minutos");
		}
		else
		{
			if(ropa<3)
			{
				printf("Lavar por 10 minutos");
			}
			else
			if(ropa>2)
			{
				printf("Lavar por 20 minutos");
			}
		}
	}
	else
	{
		printf("Caracter no valido, intetalo de nuevo");
	}
}
else
{
	printf("Caracter no valido, adios");
}
}
