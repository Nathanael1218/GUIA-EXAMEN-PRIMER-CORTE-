/*HERNANDEZ GAONA VICTOR NATHANAEL
1AV6   ACTIVIDAD 24.1*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
int indicador;
printf("Introduzca un valor para reconocer la temperatura de su zona:\n");
scanf("%d",&indicador);
switch(indicador){
	case 1:
	printf("Calor");
	break;
	case 2:
	printf("Templado");
	break;
	case 3:
	printf("Frio");
	break;
	case 4:
	printf("Fuera de rango");
	break;
	default:
	printf("Introduzca un valor menor que 5.");
}
}
