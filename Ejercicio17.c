#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escribirVector(char h[], int len);
int tresAstConsec(char v[], int lon);

int main(){

    int res=0;

    char v[10]={'*','3','*','*','*','p','*','4','*','*'};
    /*char v[10]= {'A','E','c','e','i','o','u','4','*','U'};*/
    escribirVector(v,10);

    res=tresAstConsec(v,10);

    printf("\n %d",res);

}
int tresAstConsec(char v[], int lon){

    int contador=0;

    for(int i=0; i<lon && contador<3; i++)
    {
        if(v[i]=='*'){
            contador++;
        }
        else
            contador=0;
    }

    return contador==3;
}
void escribirVector(char h[], int len){
    printf("[");

    for (int i=0; i<len-1; i++)
    {
        printf("%c ",h[i]);
    }

    printf("%c]",h[len-1]);
    printf("\n");
}
