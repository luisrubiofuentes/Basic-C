#include <stdio.h>
#include <math.h>

#define FACTOR_CONVERSION 0.453592

int main()
{

    float x,y,z;

    printf("\nPor favor, introduzca su peso en libras: ");
    scanf("%f", &x);

    y=x*FACTOR_CONVERSION;
    z=y*1000;
    printf ("\nSu peso en Kg es %.3f y en gramos es %.3f \n",y,z);


}
