#include <stdio.h>


int main(){


int numero,ancho=0,alto=0;



printf("\nINtroduce el numero de escalones.");
scanf("%d", &numero);

printf("\nINtroduce el ancho.");
scanf("%d", &ancho);

printf("\nINtroduce el alto.");
scanf("%d", &alto);

for (int i=1; i<=numero;i++){


  /*espacios*/
            for (int j = 1; j <= (i-1)*(ancho-1); j++) {
                printf(" ");
            }

 /*ancho*/
            for (int j=0; j < ancho; j++) {
                printf("*");
            }
            printf("\n");

             /* alto*/
            for (int k=0; k<alto; k++) {
                /* espacios*/

                for (int j = 1; j <= i*(ancho-1); j++) {
                    printf(" ");
                }
                printf("*\n");

            }
}



}
