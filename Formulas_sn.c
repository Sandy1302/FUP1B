#include<stdio.h>
int n1;
int n2;
int suma;
int resta;
int multi;
int divis;
char v;
int main()
{
	printf("Ingresa 2 numeros que sean de su preferencia\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	suma=n1+n2;
	resta=n1-n2;
	multi=n1*n2;
	divis=n1/n2;
	printf("Tu resultado de la suma es...%d\n",suma);
	printf("Tu resultado de la resta es...%d\n",resta);
	printf("Tu resultado de la multiplicacion es...%d\n",multi);
	printf("Tu resultado de la division es...%d\n\n", divis);
	printf("¿desea volver a intentarlo?");
	scanf("%d",&v);
	
	while(v='s')
	{
		v='s';
	}
}
