#include<stdio.h> //Calificaciones
int calificacion; 
int Aprobado;
int Reprobado;
int main ()
{//Inicio de Main
 printf("ingresa tu calificacion");
 scanf("%d",&calificacion );
if (calificacion>6)
{//inicio de If
 printf("Aprobado");
}//Fin de If
else
{//inicio de Else
 printf("Reprobado");
}//fin de Else 
}// Fin de Main
