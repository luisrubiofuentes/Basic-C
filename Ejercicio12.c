#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
/*Los tipos de datos, si double, si int..*/
struct puntos{
    int x[3];
    int y[3];

};

double calculardistancia(struct puntos a1,struct puntos b1,struct puntos c1);
int main(){


struct puntos a,b,c;


        printf("\nIntroduce las coordenadas en X del triangulo x0: ");
        scanf("%d",&a.x[0]);
        printf("\nIntroduce las coordenadas en Y del triangulo y0: ");
        scanf("%d",&a.y[0]);
        printf("\nIntroduce las coordenadas en X del triangulo x1: ");
        scanf("%d",&b.x[1]);
        printf("\nIntroduce las coordenadas en Y del triangulo y1: ");
        scanf("%d",&b.y[1]);
        printf("\nIntroduce las coordenadas en X del triangulo x2: ");
        scanf("%d",&c.x[2]);
        printf("\nIntroduce las coordenadas en Y del triangulo y2: ");
        scanf("%d",&c.y[2]);

printf("\nEl perimetro formado por el triangulo de A(%d,%d),B(%d,%d) y C(%d,%d) es: %lf",a.x[0],a.y[0],b.x[1],b.y[1],c.x[2],c.y[2],calculardistancia(a,b,c));
}
double calculardistancia(struct puntos a1 ,struct puntos b1,struct puntos c1){

return sqrt(pow(b1.x[1] -a1.x[0],2)+ pow(b1.y[1]-a1.y[0],2))+sqrt(pow(c1.x[2] -b1.x[1],2)+ pow(c1.y[2]-b1.y[1],2))+sqrt(pow(a1.x[0] -c1.x[2],2)+ pow(a1.y[0]-c1.y[2],2));


}
