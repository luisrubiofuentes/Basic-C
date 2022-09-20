#include <stdio.h>
#include <stdlib.h>

int main(){

int aleatorio,introducido;
srand(time(NULL));
aleatorio=1+rand()%1000;

do{

    printf ("\nIntroduzca el numero que intenta adivinar: ");
    scanf("%d",&introducido);

    if (introducido<aleatorio && introducido !=aleatorio){
        printf("\nEl numero que busca es mayor.\n");
    }
   else if (introducido>aleatorio && introducido !=aleatorio){
        printf("\nEl numero que busca es menor.\n");
    }

}while(introducido!=aleatorio && introducido !=aleatorio);

printf ("\n\tENHORABUENA HAS ACERTADO.\n");








}
