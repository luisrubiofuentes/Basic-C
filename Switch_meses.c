#include <stdio.h>

int main()
{

    int numero=0;

    printf ("\n Escribe un nº entre 1 y 12 ");
    scanf("%d", &numero);

    switch (numero)
    {


    case 1:
    {
        printf("\n Es Enero.");
               break;
    }

case 2:
    {
        printf("\n Es Febrero.");
               break;
    }

    case 3:
    {
        printf("\n Es Marzo.");
               break;
    }

case 4:
    {
        printf("\n Es Abril.");
               break;
    }

    case 5:
    {
        printf("\n Es Mayo.");
               break;
    }

case 6:
    {
        printf("\n Es Junio.");
               break;
    }

    case 7:
    {
        printf("\n Es Julio.");
               break;
    }

case 8:
    {
        printf("\n Es Agosto.");
               break;
    }

    case 9:
    {
        printf("\n Es Septiembre.");
               break;
    }

case 10:
    {
        printf("\n Es Octubre.");
               break;
    }

    case 11:
    {
        printf("\n Es Noviembre.");
               break;
    }

case 12:
    {
        printf("\n Es Diciembre.");
               break;
    }
default: {printf("\n No existe ese mes.");}

    }
}
