#include <stdio.h>

int main()
{

    int numero,mayor=0,menor,i=0;

    do
    {
        printf ("\nIntroduce un numero: ");
        scanf ("%d",&numero);


        if (numero>mayor)
        {
            mayor=numero;

        }
        else if (mayor==numero){
            i++;
        }

        else if (numero<menor){
            menor=numero;
        }

    }
    while (numero !=0);


 printf("El número mayor es: %d y ha aparecido %d veces\n", mayor,i+1);

}
