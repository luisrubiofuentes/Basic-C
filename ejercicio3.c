#include <stdio.h>

int cubo(int numero);


int main(){

int num=0;

printf("\nIntroduce el numero: ");
scanf("%d",&num);

printf("\nEL numero %d al cubo es: %d", num,cubo(num));



}
int cubo(int numero){

    return numero*numero*numero;

}
