/*HERNANDEZ GAONA VICTOR NATHANAEL
1AV6   ACTIVIDAD 4*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main (void){

float h,pr,e;
printf("Cual es tu estatura? \n (digitelo en centimetros) \t");
scanf("%f",&h);

printf("\nCual es tu edad ? \t");
scanf("%f",&e);

pr=((h-100)+(e/100))*.9;
printf("\n Tu peso recomendado es alrededor de: %f  ",pr);
}
