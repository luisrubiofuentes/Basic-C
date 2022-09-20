#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escribirMatriz(int filas, int cols, int m[][cols]);
void leerMatriz(int filas, int cols, int m[][cols]);
void multiplicarMatrices(int filas1, int cols1, int m1[][cols1], int filas2, int cols2, int m2[][cols2], int filasR, int colsR, int[][colsR]);

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
    if(cols1==fils2){
        printf("\nCORRECTO SE PUEDEN MULTIPLICAR\n");
    }

multiplicarMatrices(fils1,cols1, v1,fils2, cols2, v2, fils1, cols2, res);
}
void multiplicarMatrices(int filas1, int cols1, int m1[filas1][cols1], int filas2, int cols2, int m2[filas2][cols2], int filasR, int colsR, int mat[filasR][colsR]){


for(int i=0;i<filasR;i++){
    for(int j=0;j<colsR;j++){
        mat[i][j]=0;
        for(int k=0;k<cols1;k++){
           mat[i][j] += m1[i][k]*m2[k][j];
        }
    }
}
    escribirMatriz(filasR,colsR,mat);
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
