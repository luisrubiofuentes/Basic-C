#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escribirVector(char h[], int len);
int tresGrupAstConsec(char v[], int lon);

int main(){

    int res=0;

    char v[10]={'*','*','*','*','*','*','*','*','*','a'};
    /*char v[10]= {'A','E','c','e','i','o','u','4','*','U'};*/
    escribirVector(v,10);

    res=tresGrupAstConsec(v,10);

    printf("\n %d",res);

}
int tresGrupAstConsec(char v[], int lon){

    int contad=0,grup=0;

    for(int i=0; i<lon; i++)
    {
        if(v[i]=='*'){
            contad++;

                if(contad>=3)
                    grup++;

        }
        else
            contad=0;
    }

    return grup;
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
