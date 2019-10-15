/*HERNANDEZ GAONA VICTOR NATHANAEL
1AV6   ACTIVIDAD 6*/

#include<stdio.h>
#include<conio.h>

int main(void){
int numero;
printf("\nIntroduzca un numero entero:");
scanf("%d",&numero);
if (numero%2==0)
printf("\nEs par");
else
printf("\nEs impar");
getch();
return 0;
}
