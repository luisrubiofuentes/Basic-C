#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char palabra[100];

    printf("\nIntroduce una palabra: ");
    scanf("%s",&palabra);

    for (int i=strlen(palabra)-1;i>=0;i--){
        printf("%c",palabra[i]);
    }

}

