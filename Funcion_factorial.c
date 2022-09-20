#include <stdio.h>

int factorial(int numero);

int main()
{

    int n,res;

    printf("\n Introduce el numero a calcular su factorial: ");
    scanf("%d",&n);



    res=factorial(n);
    if(res==-1){
        printf("\nERROR");
    }

    printf("\n %d", res);
}

int factorial(int numero)
{
    if(numero<0){
        return -1;
    }

int facto=1;
    for (int i=1; i<=numero; i++)
    {
        facto*=i;
    }
return facto;
}
