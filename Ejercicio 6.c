#include <stdio.h>
#include <math.h>



int main()
{

    int altura, base, area;


    printf("\nIntroduce la altura del tri�ngulo a calcular: ");
    scanf("%d", &altura);

    printf("\nIntroduce la base del tri�ngulo a calcular: ");
    scanf("%d", &base);

    area=(altura*base)/2;

    printf("\nUn tri�ngulo de altura %d y base %d, tiene un �rea de %d \n", altura,base,area);



}

