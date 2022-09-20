#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
void ej6(char texto[], char simbolo);
int esvocal(char letra);
int main(){

    char texto[100];

    printf("\nIntroduce el texto a analizar: ");
    gets(texto);
    ej6(texto,'-');
    puts(texto);

}
void ej6(char texto[], char simbolo){

    for (int i=0;texto[i]!= '\0';i++){

        if(esvocal(texto[i])){
            texto[i]=simbolo;}
    }
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
