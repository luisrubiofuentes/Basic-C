#include <stdio.h>

int main()
{


    int numero;

    printf("\nIntroduce la base del tri�ngulo a calcular: ");
    scanf("%d", &numero);

    for (int i=1; i<=numero; i++)
    {
        if (i%2==0)
        {
            printf (" ");
        }

        for (int j=1; j<=numero; j++)
        {

            printf("*");
        }

        printf("\n");


    }
}
