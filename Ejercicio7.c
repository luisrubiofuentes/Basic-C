#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
/*APRENDERME BIEN ESTE CAMBIO RARO QUE HACE*/
void ej7(char texto[]);
void lower(char text[]);
int main(){

    char texto[100];

    printf("\nIntroduce el texto a analizar: ");
    gets(texto);
    ej7(texto);
    printf("%s\n",texto);

}
void ej7(char texto[]){

        int i=0;
        lower(texto);
        while(texto[i]!='\0'){
            if(isalpha(texto[i]))
                texto[i]=(texto[i]-97+2)%26+97;
            i++;
        }
}
void lower(char text[]){
    int longitud=strlen(text);
        for(int i=0;i<strlen(text);i++){
            text[i]=tolower(text[i]);
        }
}
