#include<stdio.h>
int matriz[3][2];
int i,j;
int matriza[2][3];
int a,b;
int hola;
int main()
{	
	for(i=0; i<20; i++)
	{
		for(j=0; j<20; j++)
		{
			printf("Introduce el valor del lugar [%d] [%d] de la matriz \n",i+1,j+1);
			scanf("%d", &matriz [i][j]);
		}
	}
	
	for(a=0; a<20; a++)
	{
		for(b=0; b<20; b++)
		{
			printf("Introduce el valor del lugar [%d] [%d] de la matriz \n",a+1,b+1);
			scanf("%d", &matriza [a][b]);
		}
	}
	printf("\n\n");
	
	if(matriz[i][j] =! matriza[a][b])
	{
		hola=matriz[i][j] * matriza[a][b];
		printf("tu resultado es...\n",hola);
	}
	printf("\n");
}

