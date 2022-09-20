#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char frase[100];

    printf("\nIntroduce una frase: ");
    gets(frase);

    for(int i=0; i<strlen(frase);i++){
        if(frase[i]==' '){
            printf("\n");
        }
        while(frase[i]==' ')
            i++;
        printf("%c",frase[i]);
    }


}
