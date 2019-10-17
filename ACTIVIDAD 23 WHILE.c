/*HERNANDEZ GAONA VICTOR NATHANAEL
1AV6   ACTIVIDAD WHILE*/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main (void){
int i=2,n=1,s=0;
printf("Suma de cada tercer numero cuando i=2.\n");
while(n<100){
 printf("%d+%d=",s,i);
 s=s+i;
 i+=3;
 printf("%d\n",s);
 n++;
 }
printf("El resultado de la suma es:%d\n",s);
}
