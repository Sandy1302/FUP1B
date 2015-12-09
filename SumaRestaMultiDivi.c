#include<stdio.h>
int suma (int a, int b)
{
	int res;
	res = a + b;
	return res;
}
int resta (int c, int d)
{
	int res;
	res = c - d;
	return res;
}
int multiplicacion (int e, int f)
{
	int res;
	res = e * f;
	return res;
}
float division (int g, int h)
{
	int res;
	res = g/h;
	return res;
}

int main()
{
	int res;
	res= suma (2,2);
	printf("La suma es...%d\n",res);
	int resu;
	resu = resta (2,1);
	printf("La resta es... %d\n",resu);
	int resul;
	resul = multiplicacion (2,2);
	printf("La multiplicacion es %d\n",resul);
	float result; //si le pongo int el resultado me sale a 1, pero si le pongo float el resultado me sale a 0 ¿?
	result = division (5,3);
	printf("El resultado de la division es... %d\n",result);
}
