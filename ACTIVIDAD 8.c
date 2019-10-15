/*HERNANDEZ GAONA VICTOR NATHANAEL
1AV6   ACTIVIDAD 8*/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (void){
float d;
int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11;
printf("Conozca la cantidad minima de billetes y monedas de su dinero adquirido.\n");
printf("Introduce la cantidad de dinero:\n");
scanf("%f",&d);

c1=d/1000;
c2=(fmod(d,1000))/500;
c3=(fmod(d,500))/200;
c4=(fmod(d,500)-(c3*200))/100;
c5=(fmod(d,100))/50;
c6=(fmod(d,50))/20;
c7=(fmod(d,50)-(c6*20))/10;
c8=(fmod(d,10))/5;
c9=(fmod(d,5))/2;
c10=(fmod(d,5)-(c9*2))/1;
c11=(fmod(d,1))/0.5;

printf("%d billetes de 1000.\n",c1);
printf("%d billetes de 500.\n",c2);
printf("%d billetes de 200.\n",c3);
printf("%d billetes de 100.\n",c4);
printf("%d billetes de 50.\n",c5);
printf("%d billetes de 20.\n",c6);
printf("%d monedas de 10.\n",c7);
printf("%d monedas de 5.\n",c8);
printf("%d monedas de 2.\n",c9);
printf("%d monedas de 1.\n",c10);
printf("%d monedas de 0,5.\n",c11);
}
