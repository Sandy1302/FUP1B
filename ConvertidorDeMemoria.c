#include<stdio.h>//Libreria de e/S
/* convertidor de unidades de medidas de memoria*/
int MB;
int R1;
int R2;
int R3;
int main()
{//inicio
 printf("Convertir de MB a GB, KB,TB\n");
 printf("Dame tus MB");
 scanf("%d",&MB);
 R1=MB*.000977;
 R2=MB*1024;
 R3=MB*.000000000093132*10;
 printf("El resultado de MB a GB es... %d\n", R1);
 printf("El resultado de MB a KB es... %d\n", R2);
 printf("El resultado DE MB a TB es... %f\n", R3);
 }//fin
