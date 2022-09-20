#include <stdio.h>

int main(){

int numero,factorial=1;

printf ("\nIntroduce el numero para calcular su factorial: ");
scanf ("%d", &numero);

for (int i=1 ; i<=numero ; i++){

    factorial*=i;

}
printf ("%d",factorial);

}
