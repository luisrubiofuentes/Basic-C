#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void converter(char text[]);
int main(){

    char texto[100];

    printf("\nIntroduzca texto: ");
    gets(texto);

    converter(texto);

}
void converter(char text[]){
        for (int i=0;i<strlen(text);i++){


                if(text[i]>=65 && text[i]<=90){
                    text[i]=tolower(text[i]);}

                else if(text[i]>=97 && text[i]<=122){
                    text[i]=toupper(text[i]);}

    }
    printf("%s",text);


 }

