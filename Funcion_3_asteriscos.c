#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escribirVector(char h[], int len);
int tresAst(char v[], int lon);

int main(){

    int res=0;

    char v[10]={'*','*','c','e','i','o','u','4','*','*'};
    /*char v[10]= {'A','E','c','e','i','o','u','4','*','U'};*/
    escribirVector(v,10);

    res=tresAst(v,10);

    printf("\n %d",res);

}
int tresAst(char v[], int lon){

    int nast=0,result=0;

    for(int i=0; i<lon; i++)
    {
        if(v[i]=='*'){
            nast++;
        }
    }
    if(nast>=3){
        result=1;
    }
    return result;
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
