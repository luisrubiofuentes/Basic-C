#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846




int main(){

float radio,perimetro;

printf("\nIntroduce el radio del circulo a calcular: ");
scanf("%f", &radio);

perimetro=2*PI*radio;

printf("\n El circulo tiene un perimetro de %f \n",perimetro);


}
