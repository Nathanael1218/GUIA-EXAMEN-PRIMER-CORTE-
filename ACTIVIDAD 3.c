
/*HERNANDEZ GAONA VICTOR NATHANAEL
1AV6  ACTIVIDAD 3*/

#include<stdio.h>
#include<conio.h>
int main (void){
int x=2,y=80,z=3,a,b,c,d,e;
a=x==1;
b=!(y==80);
c=(x>y)||(z<2*x);
d=(y%x)>(x==1);
e=(x<y)^(x==2)||(z>0);
if(a==0){
printf("La operaci�n x==1 es falsa.\n");
 }
else{
printf("La operaci�n x==1 es verdadera.\n");
 }
if(b==0){
printf("La operaci�n !(y==80) es falsa.\n");
 }
else{
printf("La operaci�n !(y==80) es verdadera.\n");
 }
if(c==0){
printf("La operaci�n (x>y)||(z<2*x) es falsa.\n");
 }
else{
printf("La operaci�n (x>y)||(z<2*x) es verdadera.\n");
 }
if(d==0){
printf("La operaci�n (el modulo de y con respecto a x)>(x==1) es falsa.\n");
 }
else{
printf("La operaci�n (el modulo de y con respecto a x)>(x==1) es verdadera.\n");
 }
if(e==0){
printf("La operaci�n (x<y)^(x==2)||(z>0) es falsa.\n");
 }
else{
printf("La operaci�n (x<y)^(x==2)||(z>0) es verdadera.\n");
 }
}
