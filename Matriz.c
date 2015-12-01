#include<stdio.h>
int matriz[3][3];
int i,j;
int main()
{	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Introduce el valor del lugar [%d] [%d] de la matriz\n",i+1,j+1);
			scanf("%d", &matriz [i][j]);
		}
	}
	printf("\n");
	printf("Esta es la matriz, ya ordenanda\n");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
		{
			printf("%6d",matriz[i][j]);
		}
	}
	printf("\n");	
}

