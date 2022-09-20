#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escribirVector(char h[], int len);
int nGrupAstConsec(int n, char v[], int lon);

int main(){

    int res=0,consecs=0;

    char v[10]={'*','*','o','o','*','*','p','u','*','*'};
    /*char v[10]= {'A','E','c','e','i','o','u','4','*','U'};*/
    escribirVector(v,10);
    printf("\nIntroduce cuantos asteriscos consecutivos: ");
    scanf("%d",&consecs);

    res=nGrupAstConsec(consecs,v,10);

    printf("\n %d",res);

}
int nGrupAstConsec(int n, char v[], int lon){

    int contad=0,group=0;

    for(int i=0; i<=lon; i++)
    {
        if(v[i]=='*'){
            contad++;
                if(contad>=n){
                    group++;
                }

        }
        else {
        contad=0;
    }

    }


    return group;
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

