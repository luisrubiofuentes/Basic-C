#include <stdio.h>

int main(){

int numero;

printf ("\nIntroduce el numero: ");
scanf ("%d", &numero);

for (int i=0; i<=10; i++){
    printf ("\n%d", numero*i);
}

}
