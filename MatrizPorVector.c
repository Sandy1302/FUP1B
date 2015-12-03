#include<stdio.h>
int matriz[3][3];
int vector[10];
int a=0;
int i,j,b,c,x;
int main()
{
	printf("ingresa un vector\n");
	for(j=0;a<3;a++)
	{
		scanf("%d",&vector[a]);
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Introduce el valor del lugar [%d] [%d] de la matriz \n",i+1,j+1);
			scanf("%d", &matriz [i][j]);
		}
	}
	
	printf("\n\n");
	printf("Esta es la matriz, ya ordenanda\n");
	
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<4; j++)
		{
			printf("%6d",matriz[i][j]);
		}
	}
	j=0;
	
	printf("\n");
	printf("\n");
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			c=matriz[i][j]*vector[a];
			b+=x;
			j++;
		}
		printf("\n%d",b);
		b=0;
		a=0;
		break;
	}	
}
