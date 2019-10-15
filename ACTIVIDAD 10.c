/*HERNANDEZ GAONA VICTOR NATHANAEL
1AV6   ACTIVIDAD 10*/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(void){
int cuota,litros,pago;
printf("Conozca su gasto mensual (en pesos) de agua, por familia.\n");
printf("Introduzca la cantidad de litros gastados en el mes:\n");
scanf("%d",&litros);
if(litros<=50){
cuota=0;
 }
else{
 if(50<litros&&litros<200){
 cuota=10*litros;
  }
 else
 cuota=20*litros;
 }
if(cuota<200){
 pago=200;
 }
pago=cuota;
printf("La cantidad de dinero a pagar es de %d pesos.\n",pago);
}
