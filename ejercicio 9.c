#include <stdio.h>
#include <math.h>

int main(){

float m,c,a,b,r;
float p,p1,p2,rz,rz1;

printf("\nIntroduce la pendiente m: ");
scanf("%f",&m);
printf("\nIntroduce la c: ");
scanf("%f",&c);
printf("\nIntroduce la coordenada x: ");
scanf("%f",&a);
printf("\nIntroduce la coordenada y: ");
scanf("%f",&b);
printf("\nIntroduce el valor del radio r: ");
scanf("%f", &r);


p2=(1+(m*m));
p1=(2*m*c)-(2*a)-(2*m*b);
p=(a*a)+(b*b)+(c*c)-(2*b*c)-(r*r);

rz=(-p1+pow((p1*p1)-(4*p2*p),2))/2;
rz1=(-p1-pow((p1*p1)-(4*p2*p),2))/2;
printf("\n %f + ; %f - ; \n", rz,rz1);

if()

}
