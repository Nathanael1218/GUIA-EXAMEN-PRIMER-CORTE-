/*HERNANDEZ GAONA VICTOR NATHANAEL
1AV6   ACTIVIDAD 5*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (void){
float r,a,p,pi=3.1416;
printf("Cual es el radio de tu circulo? \t"); scanf("%f",&r);
p=(2*r)*pi;
a=pow(r,2)*pi;
printf("\n\n El perimetro es : %f, y El area es igual a : %f",p,a);
}
