#include <stdio.h>

int main(){

int numero=0,numero2=0, numero3=0;

printf("\nEscribe un numero: ");
scanf("%d",&numero);

printf("\nEscribe un numero: ");
scanf("%d",&numero2);

printf("\nEscribe un numero: ");
scanf("%d",&numero3);

if (numero>numero2 && numero>numero3){

    printf("El mayor es %d", numero);
}

else if (numero2>numero && numero2>numero3){

    printf("El mayor es %d", numero2);
}
else{
    printf("El mayor es %d", numero3);
}
}
