#include <stdio.h>
#include <math.h>
int esPrimo(int numero);

int main(){

int n=0;

printf("\nIntroduce el numero: ");
scanf("%d",&n);



printf("%d",esPrimo(n));


}
int esPrimo(int numero){

    int i=2,result=0;

    while(i<=sqrt(numero) && numero%i!=0){
        i++;
    }



    if(i>=sqrt(numero))
        result=1;

else
    result=0;

return result;
}
