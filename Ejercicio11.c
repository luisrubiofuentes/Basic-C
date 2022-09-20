#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/*NO LE ENTIENDO*/

int str(char texto1[],char texto2[]);
int main(){

    char texto[100];
    char texto2[100];

    printf("\nIntroduzca texto: ");
     scanf("%s",texto);
    printf("\nIntroduzca texto2: ");
    scanf("%s",texto2);

   printf("\n %d", str(texto,texto2));

}
int str(char texto1[],char texto2[]){

    int i=0;
    int longitud=strlen(texto1);

    for (int i=0;i<longitud && !(texto1[i]-texto2[i]);i++){}

    if(i<longitud)
        return texto1[i]-texto2[i];

    if(texto2[i]=='\0')
        return 0;
    else
        return (-texto2[i]);
}
