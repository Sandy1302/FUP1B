#include<stdio.h>
int calificacion[10];
int moda[10];
int moda1;
int i=0;

int main()
{
	for (i=0;i<10;i++)
	{
		printf("Ingresa tu calificacion:");
		scanf("%d",&calificacion[i]);
		moda[i]=0;
		
		for(i=0; i<10; i++)
		{
			moda[i]=0;
			for(i=0; i<10; i++)
			{
				moda1=(calificacion[i]-1);
				printf("La moda es %d",moda1);
			}
		}
	}
}
