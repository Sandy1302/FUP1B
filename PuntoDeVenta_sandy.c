#include<stdio.h>
int producto;
int cantidad;
int total;
int main ()
{
	printf("que quieres llevar \n");
	printf("Galletas 2\n Dulces 4\n pan 1\n papas 5\n agua 5\n sopa 3\n cafe 4\n gomitas 2\n sal 8\n crema 10\n");
	scanf("%d",&producto);
	switch (producto)
	{
		case 1:{
			printf ("cuantos paquetes quieres llevar\n");
			scanf("%d",&cantidad);
			total=cantidad*2;
			printf ("total a pagar %d", total);
			break;
		}
		
		case 2:{
			printf("cuantos dulces quieres llevar\n");
			scanf("%d",&cantidad);
			total=cantidad*4;
			printf("total a pagar %d", total);
			break;
		}
		
		case 3:{
			printf("cuantas piezas de pan quieres llevar\n");
			scanf("%d",&cantidad);
			total=cantidad*1;
			printf("toatal a pagar %d",total);
			break;
		}
		
		case 4:{
			printf("cuantos paquetes quieres llevar papas\n");
			scanf("%d",&cantidad);
			total=cantidad*5;
			printf("total a pagar %d", total);
			break;
		}
		
		case 5:{
			printf("cuantos litros quieres llevar agua\n");
			scanf("%d",&cantidad);
			total=cantidad*5;
			printf ("total a pagar %d", total);
			break;
		}
		
		case 6:{
			printf ("cuantos paquetes de sopa quieres llevar");
			scanf("%d",&cantidad);
			total=cantidad*3;
			printf("tu total a pagar es %d", total);
			break;
		}
		
		case 7:{
			printf("cuantos sobres de cafe quieres llevar");
			scanf("%d",&cantidad);
			total=cantidad*4;
			printf("tu total a pagar es %d", total);
			break;
		}
		
		case 8:{
			printf("cuantos paquetes de gomitas quieres llevar");
			scanf("%d",&cantidad);
			total=cantidad*2;
			printf("tu total a pagar es %d", total);
			break;
		}
		
		case 9:{
			printf("cuantos paquetes de sal");
			scanf("%d",&cantidad);
			total=cantidad*8;
			printf("tu total a pagar es %d", total);
			break;
		}
				
		case 10:{
			printf("cuantos cuartos de crema quieres llevar");
			scanf("%d",&cantidad);
			total=cantidad*10;
			printf("tu total a pagar es %d", total);
			break;
		}
				
		default :{
			printf("Intentarlo mas tarde");
			break;
		}		
	}	
}
