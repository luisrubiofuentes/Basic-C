#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*INteresante cómo lo ha hecho óscar!!!! con el >= en la funcion*/
int paresAst(char v[], int lon);
void escribirVector(char h[], int len);

int main(){

    int res=0;
    /*char v[10]={'*','3','*','3','*','4','*','4','*','4'};
    char v[10]={'1','*','3','*','5','*','7','*','9','*'};*/
    char v[10]= {'*','3','*','3','*','4','*','4','*','4'};

    escribirVector(v,10);

    res=paresAst(v,10);

    printf("\n %d",res);

}
int paresAst(char v[], int lon){

    if(lon==0){
    return 0;
   }
   int j=0;
    for(j=0; j<=lon && v[j]=='*'; j=j+2)
    {
    }


    return j>=lon;
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
