#include <stdio.h>

int main()
{

    int x,y;

    printf("\nIntroduce un numero: ");
    scanf("%d", &x);

    y=x*11;

    printf ("%d", y);

    if((y%2)==0)            /*También valdría "  !(x%2) */
    {
        printf("\nEste numero es par");
    }
    else
    {
        printf("\nEste numero es impar\n");
    }
}
