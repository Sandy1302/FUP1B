#include<stdio.h>
int ava;
int ret; 
int profundidad;
int profundidad1;
int dias;
int i;
int main()
{
	printf("cangrejo que cae\n\n");
	
	printf("ingresa la profundidad a la que esta\n");
	scanf("%d",&profundidad);
	
	printf("ingresa los metros que avanza\n");
	scanf("%d",&ava);
	
	printf("ingresa los metros que retrocede\n");
	scanf("%d",&ret);
	
	if(ava>ret)
	
	for(i=0; ava>ret; i++)
	{
		profundidad=profundidad-ava;
		profundidad1=profundidad+ret;
		dias=profundidad1/2;
		printf("%d",dias);
		break;
	}
	
	else
	{
		printf("\nnunca va a salir");
	}
	
}
