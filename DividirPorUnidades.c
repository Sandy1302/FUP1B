#include<stdio.h>
int x;
int y;
int u;
int d;
int c;
int m;
int main()
{
	printf("Dame un numero y te digo las Unidades,Decenas, Centenas y Unidades de Millar\n");
	scanf("%d",&x);
	
	u=x%10;
	printf("Unidades:%d\n",u);
	
	y=x-u;
	y=y%100;
	d=y/10;
	printf("Decenas:%d\n",d);
	
	y=x-d*10-u;
	y=y%1000;
	c=y/100;
	printf("Centenas:%d\n",c);
	
	y=x-d*10-u;
	m=y/1000;
	printf("Unidades de millar:%d\n",m);
}
