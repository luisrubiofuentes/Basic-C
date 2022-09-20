#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void mayusculas(char pal[]);
int main(){

    char palabra[30];

    printf("\nIntroduzca una palabra: ");
    scanf("%s",palabra);

    mayusculas(palabra);

}
void mayusculas(char pal[]){

    for (int i=0;i<strlen(pal);i=i+2){
        pal[i]=toupper(pal[i]);
    }

    printf("%s",pal);

 }
