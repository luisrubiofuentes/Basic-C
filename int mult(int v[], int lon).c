#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escribirVector(int h[], int len);
int mult(int v[], int lon);

int main(){
/*NO SE A QUE SE REFIERE CON DEVOLVER -1*/
    int res=0;
int v[10]={4,5,6,7,8,9,1,8,2,3};
    /*int v[10]= {'A','E','c','e','i','o','u','4','*','U'};*/
    escribirVector(v,10);

    res= mult(v,10);

    printf("\n %d",res);

}
int mult(int v[], int lon){
    if(lon<0){
        return -1;
    }

    int result=1;

    for(int i=0; i<lon; i++){

    result=result*v[i];

    }

    return result;
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
