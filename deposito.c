#include <stdio.h>
#include <math.h>

int main(){

float a=0.0,h=0.0,k=0.0;
float qs=0.0,t=0.0;

do{
    printf("\nSeccion del tanque en metros cuadrados (>0)?");
    scanf("%f",&a);

    if(a<=0){
        printf("\nError en el valor. Debe ser mayor a 0");
    }

}while(a<=0);
do{
    printf("\nAltura de combustible en el tanque(>0)?");
    scanf("%f",&h);

    if(h<=0){
        printf("\nError en el valor. Debe ser mayor a 0");
    }

}while(h<=0);
do{
    printf("\nConstante de vaciado(>0)?");
    scanf("%f",&k);

    if(k<=0){
        printf("\nError en el valor. Debe ser mayor a 0");
    }

}while(k<=0);


printf("\n Tiempo \t Altura \n =====================\n");

do{

    qs=k*sqrt(h);
    printf("%.2f \t \t %.2f\n", t,h);
    t=t+0.5;
    h=h-qs*0.5/a;


}while(h>0);

printf("\nTiempo de vaciado: %.2f seg",t);


}
