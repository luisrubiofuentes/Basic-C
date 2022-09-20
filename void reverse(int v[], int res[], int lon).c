#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escribirVector(int h[], int len);
void reverse(int v[], int res[], int lon);

int main(){

    int v[10]={4,5,6,7,8,9,1,8,2,3};
    int t[10]={};

    escribirVector(v,10);

    reverse(v,t,10);
    escribirVector(v,10);
    escribirVector(t,10);

}
void reverse(int v[], int res[], int lon){

    int j=lon-1;
    for (int i=0; i<lon; i++)
    {
    res[i]=v[j-i];
    }



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


