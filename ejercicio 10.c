#include <stdio.h>

int main(){

int aux=0,num=0,resto=0,invertido=0;

printf ("\nIntroduce un numero.");
scanf ("%d",&num);

aux=num;

while(aux>0){

    resto=aux%10;
    aux=aux/10;
    invertido=invertido*10+resto;

}
printf("%d",invertido);
}
