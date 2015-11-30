#include<stdio.h>
char cadena[40];
char subcadena[40];
int j=0;
int i=0;
int main()
{
	printf("Ingresa la plalabra que tu gustes\n");
	scanf("%s",&cadena);
	printf("Ingresa alguna palabra que este dentro de tu plabra\n");
	scanf(" %s",&subcadena);
	while(cadena[i] !='\0')
	{
		while(cadena[i]==subcadena[j])
		{
			i++;
			j++;
			if(subcadena[j]=='\0')
			{
				printf("Si existe");
		 		return 0;
			}
		}
		i++;
		j=0;
		if('\0' == cadena[i])
		{
			printf("No existe");
			break;
		}
	}
}
