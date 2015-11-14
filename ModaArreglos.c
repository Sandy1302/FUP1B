#include<stdio.h>
int calificacion[10];
int i=0;
float a,moda=0;
int main()
{
	for (i=0;i<10;i++)
	{
		printf("Ingresa tu calificacion:");
		scanf("%d",&calificacion[i]);
		moda+=calificacion[i];
		
		if(i==9)
		{
			a=calificacion[i];
			printf("Moda:%d\n\n",a);
			break;
		}
	}
}
