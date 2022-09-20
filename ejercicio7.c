#include <stdio.h>
#include <ctype.h>
int esvocal (char car);

int main(){

char pal;


printf("\nIntroduce el caracter: ");
scanf("%c",&pal);

printf("%d",esvocal(pal));
}
int esvocal(char car){

    switch(tolower(car)){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    return 1;
default:
    return 0;
    }
}
