#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void productoEscalar(int v[], int numero, int longitud);
void leerVector(int m[], int lon);
void escribirVector(int h[], int len);

int main()
{
    srand(time(NULL));

    int multiplicador=0;
    int v[5]= {};

    leerVector(v,5);
    escribirVector(v,5);

    printf("\nIntroduce el numero por el que multiplicar el vector: ");
    scanf("%d",&multiplicador);

    productoEscalar(v, multiplicador,5);
}
void leerVector(int m[], int lon)
{

    for (int i=0; i<lon; i++)
    {
        m[i]=rand()%51;
    }
}
void escribirVector(int h[], int len)
{
    printf("[");
    for (int i=0; i<len-1; i++)
    {
        printf("%d, ",h[i]);
    }

    printf("%d]",h[len-1]);
    printf("\n");
}

void productoEscalar(int v[], int numero, int longitud)
{

    for (int i=0; i<longitud; i++)
    {
       v[i]*=numero;
    }
    escribirVector(v,longitud);
}
