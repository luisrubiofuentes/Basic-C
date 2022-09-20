#include <stdio.h>
#include <string.h>
#include <ctype.h>
void lower(char texto[]);
int main(){

    char semana[7][20]={"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
    int numdias=7;
    char leido[100];
    int i;

    do{
    printf("\nIntroduce el dia: ");
    scanf("%s",leido);
    lower(leido);

    for(i=0;i<numdias && strcmp(leido,semana[i]);i++)
        ;
            if(i<numdias)
                printf("La palabra es dia\n");

            else
                printf("La palabra NO es dia\n");

}while(strcmp(leido,"fin"));
}
void lower(char texto[]){
    int longitud=strlen(texto);
        for(int i=0;i<strlen(texto);i++){
            texto[i]=tolower(texto[i]);
        }
}
