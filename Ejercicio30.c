#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escribirMatriz(int filas, int cols, int m[][cols]);
void leerMatriz(int filas, int cols, int m[][cols]);
void sumarMatrices(int filas, int cols, int m1[][cols], int m2[][cols], int res[][cols]);

int main(){
    int fils1=0,cols1=0;
    int fils2=0,cols2=0;

    printf("\nIntroduce las filas deseadas para matriz 1: ");
    scanf("%d",&fils1);
    printf("\nIntroduce las columnas deseadas para matriz 1: ");
    scanf("%d",&cols1);
    int v1[fils1][cols1];
    leerMatriz(fils1,cols1,v1);

    printf("\nIntroduce las filas deseadas para matriz 2: ");
    scanf("%d",&fils2);
    printf("\nIntroduce las columnas deseadas para matriz 2: ");
    scanf("%d",&cols2);

    int v2[fils2][cols2];
    int res[fils1][cols2];

    leerMatriz(fils2,cols2,v2);
    sumarMatrices(fils1,cols1,v1,v2,res);
    escribirMatriz(fils1,cols1,res);

    }
void sumarMatrices(int filas, int cols, int m1[][cols], int m2[][cols], int res[][cols]){
    for(int fila=0;fila<filas;fila++)
        for(int columna=0;columna<cols;columna++)
            res[fila][columna]=m1[fila][columna]+m2[fila][columna];
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
