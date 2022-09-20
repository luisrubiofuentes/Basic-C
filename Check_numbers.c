#include <stdio.h>

int main()
{

    int numero,mayor=0,menor,i=0;
    float suma;



    do
    {
        printf ("\nIntroduce un numero: ");
        scanf ("%d",&numero);


        if (numero>mayor && numero !=0)
        {
            mayor=numero;
             i++;
        }

        else if (numero<menor && numero !=0){
            menor=numero;
             i++;
        }
        suma=suma+numero;

    }
    while (numero !=0);

 printf("El número mayor es: %d\n", mayor);
 printf("El número menor es: %d\n", menor);
printf ("La media es: %lf",(suma/i));
}
