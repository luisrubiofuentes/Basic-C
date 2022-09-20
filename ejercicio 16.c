#include <stdio.h>

int main()
{

    int base;

    printf("\nIntroduce la base del triángulo a calcular: ");
    scanf("%d", &base);

    for (int i=1; i<=base; i++)
    {

        for (int j=1; j<=i; j++)
        {
            printf("*");

        }

        printf("\n");
    }
}
