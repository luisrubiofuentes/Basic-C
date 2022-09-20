#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escribirVector(char h[], int len);
void removeCompact(int i, char v[], int lon);

int main(){
    int posi=0;
    char v[10]= {'A','E','c','e','i','o','u','4','*','U'};
    escribirVector(v,10);

    printf("\nPosicion de la que eliminar: ");
    scanf("%d",&posi);

removeCompact(posi,v,10);
escribirVector(v,10);
}
void removeCompact(int i, char v[], int lon){

for(int j=i;i<lon;i++){
    v[i]=v[i+1];
}
v[lon-1]=' ';


}
void escribirVector(char h[], int len){
    printf("[");

    for (int i=0; i<len-1; i++)
    {
        printf("%c ",h[i]);
    }

    printf("%c]",h[len-1]);
    printf("\n");
}
