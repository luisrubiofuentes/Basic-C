#include <stdio.h>
int main()
{
    int a=0,numero;

    printf("\nIngrese numero: ");
    scanf("%d",&numero);

    for(int i=1; i<(numero+1); i++)
    {
        if(numero%i==0)
        {
            a++;
        }
    }
    if(a!=2)
    {
        printf("\nNo es Primo");
    }
    else
    {
        printf("\nSi es Primo");
    }
    return 0;
}
