#include <stdio.h>
#include <math.h>

float potencia(float base, int exponente);

int main()
{

    float bas=0;
    int expo=0;

    printf("\n Introduce la base a calcular: ");
    scanf("%f", &bas);

    printf("\n Introduce el exponente a calcular: ");
    scanf("%d", &expo);

    printf("\n El resultado es %f", potencia(bas,expo));
}

float potencia(float base,int exponente)
{
    float resultado=0;

    resultado=pow(base,exponente);

    return resultado;
}
