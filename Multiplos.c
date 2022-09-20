#include <stdio.h>

int main(){


int numero=0,numero2=0;

printf("\nEscribe un numero: ");
scanf("%d",&numero);

printf("\nEscribe un numero: ");
scanf("%d",&numero2);

if (numero%numero2==0){

    printf ("\n %d es múltiplo de %d", numero,numero2);
}

else if (numero2%numero==0){

    printf (" \n %d es múltiplo de %d", numero2,numero);
}
else {
    printf("No es nada.");
}


}
