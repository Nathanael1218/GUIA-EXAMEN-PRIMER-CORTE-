/*HERNANDEZ GAONA VICTOR NATHANAEL
1AV6   ACTIVIDAD 24.2*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
char color;
printf("Introduzca una letra para reconocer un color:\n");
scanf("%c",&color);
if(color=='r'||color=='R'){
printf("ROJO");
 }
else{
 if(color=='v'||color=='V'){
 printf("VERDE");
  }
 else{
  if(color=='a'||color=='A'){
  printf("AZUL");
   }
  else
  printf("NEGRO");
  }
 }
}
