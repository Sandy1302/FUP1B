#include<stdio.h>
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int j;
int suma;
int promedio;
int main()
{
	printf("Ingresa los 10 numeros que quieres preomediar\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&f);
	scanf("%d",&g);
	scanf("%d",&h);
	scanf("%d",&i);
	scanf("%d",&j);
	
	suma=a+b+c+d+e+f+g+h+i+j;
	promedio=suma/10;
	printf("Tu promedio es...%d",promedio);
}
