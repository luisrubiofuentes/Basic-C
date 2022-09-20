#include <stdio.h>
#include <math.h>



int main()
{

    int altura, base, area;


    printf("\nIntroduce la altura del triángulo a calcular: ");
    scanf("%d", &altura);

    printf("\nIntroduce la base del triángulo a calcular: ");
    scanf("%d", &base);

    area=(altura*base)/2;

    printf("\nUn triángulo de altura %d y base %d, tiene un área de %d \n", altura,base,area);



}

