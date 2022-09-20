#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/*NO LE SUPE HACER*/
int main(){

        char texto[60];

    printf("\nIntroduce el texto a analizar: ");
    gets(texto);
    printf("%d",ej8(texto));
}
int ej8(char texto[]){

    int letras[256];
    int letrasdistintas=0;
    int i=0;

        for (int i=0;i<256;i++)
            letras[i]=0;

        while(texto[i] != '\0'){
            letras[texto[i]]++;
            i++;
        }
        for(int i=65; i<=90;i++){
            if(letras[i])
                letrasdistintas++;
        }
           for(int i=97; i<=122;i++){
            if(letras[i])
                letrasdistintas++;
        }
      /*  for (int i=0;i<256;i++){
        printf("| %d |",letras[i]);
        }
        for(int i=0;i<256;i++){
            if(letras[i]!=0)
        printf("\n %c aparaece %d veces\n",i,letras[i]);
        }
        */

    return letrasdistintas;

}
