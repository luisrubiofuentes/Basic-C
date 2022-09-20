#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escribirVector(int h[], int len);
int iguales(int v1[], int lon1, int v2[], int lon2);

int main(){

    int v[]={4,5,6,7,8,9,1,8,8,3};
    int t[]={4,5,6,7,8,9,1,8,8,3};
    int w[]={4,5,7,7,8,9,1,8,8,3};
    int z[]={4,5,7,7,8,9,1};
    escribirVector(v,10);
    escribirVector(t,10);
    escribirVector(w,8);
        escribirVector(z,7);

   if( iguales(v,10,v,10))
    printf("\nIguales\n");
   else
    printf("\nDiferentes\n");

      if( iguales(v,10,z,7))
    printf("\nIguales\n");
   else
    printf("\nDiferentes\n");

      if( iguales(v,10,t,10))
    printf("\nIguales\n");
   else
    printf("\nDiferentes\n");

      if( iguales(v,10,w,10))
    printf("\nIguales\n");
   else
    printf("\nDiferentes\n");
}
int iguales(int v1[], int lon1, int v2[], int lon2){

    if(v1==v2 ||(lon1 ==0 && lon2==0))
        return 1;
    if(lon1 != lon2)
        return 0;

    int i;
    for(i=0;i<lon1 && v1[i]==v2[i];i++){
       }
    return i==lon1;
}
void escribirVector(int h[], int len){
    printf("[");

    for (int i=0; i<len-1; i++)
    {
        printf("%d ",h[i]);
    }

    printf("%d]",h[len-1]);
    printf("\n");
}
