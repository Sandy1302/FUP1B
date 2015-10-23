#include<stdio.h>//libreria e/S
/*propinas*/
int propina;
int total;
int personas;
int asistentes;
int pesos;
int main()
{//inicio
 printf("Calculadora de Propinas\n");
 printf("Dame el Numero de Personas");
 scanf("%d",&asistentes);
 printf("Dame la Cantidad a Pagar");
 scanf("%d",&pesos);
 propina=pesos*0.10;
 total=propina+pesos;
 personas=total/asistentes;
 printf("El Total a Pagar es...%d\n",total);
 printf("Total a Pagar por Persona es... %d\n",personas);
 
 }//fin
