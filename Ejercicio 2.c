#include <stdio.h>
#include <math.h>

/*Diseñar	un	programa que	lea	cuatro	variables
y	calcule	e	imprima	su	producto,	su
suma	y	su	media	aritmética */

int main(){

int x,y,z,t, prod_valor,sum_valor,media_valor;

printf ("\nIntroduce cuatro variables");

printf("\nVariable numero 1: ");
    scanf ("%d",&x);
printf("Variable numero 2: ");
    scanf ("%d",&y);
printf("Variable numero 3: ");
    scanf ("%d",&z);
printf("Variable numero 4: ");
    scanf ("%d",&t);

prod_valor= x*y*z*t;
sum_valor=x+y+z+t;
media_valor= (x+y+z+t)/4.0;

printf("\nEl valor del producto de las variables introducidas %d %d %d %d es %d \n", x,y,z,t,prod_valor);
printf("\nEl valor de la suma de las variables introducidas %d %d %d %d es %d \n", x,y,z,t,sum_valor);
printf("\nEl valor de la media de las variables introducidas %d %d %d %d es %.2d \n", x,y,z,t,media_valor);


}
