#include <stdio.h>

int main(){

int articulo,cantidad;
float valor=0,ingresos=0,plusvalia=0,total=0,totalabsoluto=0;

printf ("\n CALCULADORA INGRESOS. PARA SALIR PRESIONE 0. \n");
do{

printf ("\n Introduzca el articulo que ha vendido: ");
scanf("%d", &articulo);

printf ("\n Introduzca la cantidad que ha vendido: ");
scanf("%d", &cantidad);

switch (articulo)
{
    case 1: {valor=239.99;break;}
    case 2: {valor=129.75;break;}
    case 3: {valor=99.95;break;}
    case 4: {valor=350.89;break;}
}

ingresos=(valor*cantidad);
plusvalia=ingresos*0.09;
total=200+plusvalia;
totalabsoluto=totalabsoluto+total;

printf ("\nEl Total ganado vendiendo %d uds del articulo %d es: %lf \n",cantidad,articulo, total);

}while (articulo>=1 && articulo <=4);

printf ("\nLa ganancia con todo ha sido de %lf", totalabsoluto-200);

}
