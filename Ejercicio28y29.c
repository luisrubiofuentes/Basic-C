#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escribirMatriz(int filas, int cols, int m[][cols]);
void leerMatriz(int filas, int cols, int m[][cols]);

int main(){
    int fils=0,cols=0;
    int v[fils][cols];

    printf("\nIntroduce las filas deseadas: ");
    scanf("%d",&fils);
    printf("\nIntroduce las columnas deseadas: ");
    scanf("%d",&cols);

    leerMatriz(fils,cols,v);

}
void leerMatriz(int filas, int cols, int m[filas][cols]){

        for(int i=0;i<filas;i++){
            for(int j=0;j<cols;j++){
                printf("\nIntroduce m[%d][%d] ",i,j);
                scanf("%d",&m[i][j]);
            }
        }
        escribirMatriz(filas,cols,m);
}
void escribirMatriz(int filas, int cols, int m[][cols]){
            for(int i=0;i<filas;i++){
            for(int j=0;j<cols;j++){
                printf("%d\t",m[i][j]);
            }
            printf("\n");
        }
}
