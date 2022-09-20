#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*EJercicio importante*/
void escribirVector(int h[], int len);
void reverseSameVector(int v[], int lon);

int main(){

    int v[10]={1,2,3,4,5,6,7,8,9,10};


    escribirVector(v,10);
reverseSameVector(v, 10);


}
void reverseSameVector(int v[], int lon){

    int j;
    for (int i=0; i<lon/2; i++)
    {
    j=v[i];
    v[i]=v[lon-1-i];
    v[lon-1-i]=j;
    }
    escribirVector(v,lon);


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


