#include <stdio.h>

int main(){

int mes=0, agno=0;

printf ("\n Introduce tu numero de mes: ");
scanf("%d",&mes);

printf ("\nIntroduce un año: ");
scanf("%d",&agno);

if (agno%4==0 && agno%100!=0 || agno%100==0 && agno%400==0){

       switch (mes)
    {


    case 1:
    {
        printf("\n Es Enero y tiene 31 dias.");
               break;
    }

case 2:
    {
        printf("\n Es Febrero 29 dias.");
               break;
    }

    case 3:
    {
        printf("\n Es Marzo 31 dias.");
               break;
    }

case 4:
    {
        printf("\n Es Abril 30 dias.");
               break;
    }

    case 5:
    {
        printf("\n Es Mayo 31 dias.");
               break;
    }

case 6:
    {
        printf("\n Es Junio 30 dias.");
               break;
    }

    case 7:
    {
        printf("\n Es Julio 31 dias.");
               break;
    }

case 8:
    {
        printf("\n Es Agosto 31 dias.");
               break;
    }

    case 9:
    {
        printf("\n Es Septiembre 30 dias.");
               break;
    }

case 10:
    {
        printf("\n Es Octubre 31 dias.");
               break;
    }

    case 11:
    {
        printf("\n Es Noviembre 30 dias.");
               break;
    }

case 12:
    {
        printf("\n Es Diciembre 31 dias.");
               break;
    }
default: {printf("\n No existe ese mes.");}

    }

}
else {
           switch (mes)
    {


    case 1:
    {
        printf("\n Es Enero y tiene 31 dias.");
               break;
    }

case 2:
    {
        printf("\n Es Febrero 28 dias.");
               break;
    }

    case 3:
    {
        printf("\n Es Marzo 31 dias.");
               break;
    }

case 4:
    {
        printf("\n Es Abril 30 dias.");
               break;
    }

    case 5:
    {
        printf("\n Es Mayo 31 dias.");
               break;
    }

case 6:
    {
        printf("\n Es Junio 30 dias.");
               break;
    }

    case 7:
    {
        printf("\n Es Julio 31 dias.");
               break;
    }

case 8:
    {
        printf("\n Es Agosto 31 dias.");
               break;
    }

    case 9:
    {
        printf("\n Es Septiembre 30 dias.");
               break;
    }

case 10:
    {
        printf("\n Es Octubre 31 dias.");
               break;
    }

    case 11:
    {
        printf("\n Es Noviembre 30 dias.");
               break;
    }

case 12:
    {
        printf("\n Es Diciembre 31 dias.");
               break;
    }
default: {printf("\n No existe ese mes.");}

    }
}

}
