#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int numVoc(char v[], int lon);
void escribirVector(char h[], int len);

int main()
{
    int res=0;

    /*char v[10]={'a','b','c','e','i','o','u','4','*','4'};*/
    char v[10]= {'A','E','c','e','i','o','u','4','*','U'};
    escribirVector(v,10);

    res=numVoc(v,10);

    printf("\n %d",res);
}
int numVoc(char v[], int lon){

    int nvocales=0;

    for(int i=0; i<lon; i++)
    {
        switch(tolower(v[i]))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            nvocales++;
        }
    }
    return nvocales;
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
