#include <stdio.h>
#include <string.h>
#include <ctype.h>
int funcion(char text[]);
void eliminar(char text[],char elemento);
void lower(char text[]);

int main(){

    char texto[100];

    printf("\nIntroduce un texto: ");
    gets(texto);

    printf("\n%d",funcion(texto));
}
int funcion(char text[]){

    int longitud=strlen(text);
    int i=0;
    char copia[longitud];
    strcpy(copia,text);
    lower(copia);
    eliminar(copia,' ');

    longitud=strlen(copia);
        for(i=0; i<longitud/2 && copia[i]==copia[longitud-1-i];i++)
            ;
            if(i>=longitud>2)
                return 1;
            else
                return 0;

}
void lower(char text[]){
    int longitud=strlen(text);
        for(int i=0;i<strlen(text);i++){
            text[i]=tolower(text[i]);
        }
}
void eliminar(char text[],char elemento){
    int i=0;
        while (text[i]!='\0'){
            if(text[i]==elemento){
                int j=i;
                while(text[i]!='\0'){
                    if (text[i]!='\0')
                        text[j]=text[j+1];
                        j++;
                }
            }
        }


}


