#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escribirVector(char h[], int len);
int numOcChar(char c, char v[], int lon);

int main(){

    int res=0;
    char pal;

    char v[10]={'q','t','t','t','p','p','p','p','p','*'};
    /*char v[10]= {'A','E','c','e','i','o','u','4','*','U'};*/

    escribirVector(v,10);

printf("\nIntroduce caracter: ");
scanf("%c",&pal);

    res=numOcChar(pal,v, 10);

    printf("\n %d",res);

}
int numOcChar(char c, char v[], int lon){

    int n=0;

    for(int i=0; i<lon; i++)
    {
        if(v[i]==c){
            n++;
        }
    }

    return n;
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
