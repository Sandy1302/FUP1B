#include<stdio.h>// Biblioteca de E/S
int edad;
int nino;
int adolecente;
int adulto;
int adultomayor;

int main ()
{
  printf ("Dame tu Edad");
  scanf("%d",&edad);
 
 if ( edad>=0 ) or (edad<=12);
 {
   printf ("nino");
 } 
 else
 
 {
 if (edad>=13) or (edad<=18);
 {
 printf ("adolecente");
 }

 else
 {
 if ((edad>=19) || (edad<=29))
 {
 	printf("joven");
 }
 }
 
 else
 {
 
 if ((edad>=30) || (edad<=60))
 {
 {
 	printf ("adulto");
 }
 }
 else
 printf ("adulto mayor");
 }
}
}//Fin de todo 


