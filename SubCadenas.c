#include<stdio.h>
char cadena[30];
char i,sub;
int main()
{
	printf("Ingresa una plalabra\n");//2 puntos mas y comparar caracter por caracter en la cadena
	scanf("%s",cadena);
	printf("Ingresa alguna palabra que este dentro de tu plabra\n");
	scanf(" %c",sub);
	
	for(i=0; i<30; i++)
	{
		if(cadena[i] != sub)//==comparar
		{
			cadena[i]=sub;
			printf("%s",cadena);
		}
		else 
		{
			printf("Adios...");
		}
	}
}
