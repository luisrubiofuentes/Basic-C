#include <stdio.h>

int escapicua (int numero);

int main()
{


    int n=0,res;

    printf ("\n Introduce el numero que quieres comprobar: ");
    scanf("%d",&n);

    res = escapicua(n);


    if (res==n){
        printf("\nEs capicua.");
    }
    else{
        printf("\nNo es cpicua");
    }


}

int escapicua (int numero)
{

    int resto=0,cocie=0,c=0;

    while(numero !=0)
    {
        resto=numero%10;
        numero=numero/10;
        c=c*10+resto;
    }
    return c;

}
