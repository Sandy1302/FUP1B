#include<stdio.h>
int calificacion[10];
int i=0;
float a,suma=0;
int main()
{
	for (i=0;i<10;i++)
	{
		printf("Ingresa tu calificacion:");
		scanf("%d",&calificacion[i]);
		suma+=calificacion[i];
		if(i==9)
		{
			a=suma/10;
			printf("promedio:%.1f\n\n",a);
			break;
		}
	}
	system("pause");
}
