#include<stdio.h>
int a;
int b;
int n1;
int n2;
int b=1;
int a=0;
int main ()
{
	printf("Ingresa 2 numeros\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	while(b<=n1)
	{
		a=a+n2;
		b=b+1;
	}
	printf("%d",a);
}
