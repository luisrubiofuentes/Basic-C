#include <stdio.h>

double aproxi(int n);

int main(){

int n=0;

printf("\n Introduce el numero hasta el error: ");
scanf("%d",&n);


printf ("%lf",aproxi(n));
}
double aproxi(int n){

    double resul=1;
    int facto=1;

    for (int i=1; i<=n; i++)
    {
        facto=facto*i;
        resul=resul+(1.0/facto);
    }

return resul;

}
