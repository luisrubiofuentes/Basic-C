#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int esdiptongo(char letra1,char letra2);
int esvocaldebil(char letra);

int ej5(char texto[]);

int esvocal(char letra);

int main(){

    char leido[100];


    printf("\nIntroduce el texto a analizar: ");
    gets(leido);
    printf("%d\n",ej5(leido));
}
int esdiptongo(char letra1,char letra2){
    return esvocaldebil(letra1) || esvocaldebil(letra2);
}
int esvocaldebil(char letra){
    return tolower(letra)== 'i' || tolower(letra)=='u';
}
int ej5(char texto[]){

    int numsilabas=0;
    char anterior ='\0';
    int i=0;

    while(texto[i] != '\0'){
        if(esvocal(texto[i])){
            if(!esvocal(anterior) || !esdiptongo(texto[i],anterior))
                numsilabas++;
        }
        anterior=texto[i];
        i++;
    }
    return numsilabas;
}
int esvocal(char letra){
    switch(tolower(letra)){
    case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': return 1;break;
    }
    return 0;
}
