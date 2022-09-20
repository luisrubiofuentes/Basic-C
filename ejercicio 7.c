#include <stdio.h>

int main(){

int palo=0,valor=0;

printf("\n \t1=oros, \t2=copas,\t3=espadas, \t4=bastos\n");

printf("\nIntroduce el palo de la carta: ");
scanf("%d",&palo);
printf("\nIntroduce el valor de la carta: ");
scanf("%d", &valor);

switch(palo){
    case 1: {printf("\nEL palo es oros");break;}
    case 2: {printf("\nEl palo es copas");break;}
    case 3: {printf("\nEl palo es espadas");break;}
    case 4: {printf("\nEl palo es bastos");break;}
    default: {printf("\nIntroduce un palo bien.");break;}
}
switch(valor){
    case 1: {printf("\nEL valor es as");break;} /*Se podría haber puesto los valores del as,caballo,rey y enel default unn printf("%d valor", valor);*/
    case 2: {printf("\nEl valor es 2");break;}
    case 3: {printf("\nEl valor es 3");break;}
    case 4: {printf("\nEl valor es 4");break;}
    case 5: {printf("\nEl valor es 5");break;}
    case 6: {printf("\nEl valor es 6");break;}
    case 7: {printf("\nEl valor es 7");break;}
    case 8: {printf("\nEl valor es sota");break;}
    case 9: {printf("\nEl valor es caballo");break;}
    case 10: {printf("\nEl valor es rey");break;}
    default: {printf("\nIntroduce un valor bien.");break;}
}

}
