#include <stdio.h>

int main(){


int agnos=0,kg=0,metros=0,peso=0;

printf("\nIntroduce la edad: ");
scanf("%d", &agnos);
printf("\nIntroduce el peso: ");
scanf("%d", &kg);
printf("\nIntroduce la altura: ");
scanf("%d", &metros);

if (agnos>=15 && agnos<30){

    peso=(metros-1)*100;

    if(peso==kg){printf("\nMantener peso");}
    else if(kg>peso){printf("\nAdelgace");}
    else {printf("\nENgorde");}
}
if (agnos>=30 && agnos<60){

    peso=((metros-1)*100)-5;

    if (peso==kg){printf("\nMantener peso");}
    else if (kg>peso){printf("\nAdelgace");}
    else {printf("\nENgorde");}
}
if (agnos>=60 && agnos<100){

    peso=((metros-1)*100)-10;

    if (peso==kg){printf("\nMantener peso");}
    else if (kg>peso){printf("\nAdelgace");}
    else {printf("\nENgorde");}
}



}
