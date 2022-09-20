#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void leerVector(int m[], int lon);
void escribirVector(int h[], int len);

int main(){

srand(time(NULL));

int v5[100]={};

leerVector(v5,100);
escribirVector(v5, 100);

}

void leerVector(int m[], int lon){

for (int i=0; i<lon;i++){
    m[i]=rand()%51;
}
}
void escribirVector(int h[], int len){
printf("[");
for (int i=0; i<len;i++){
    printf("%d ",h[i]);
}
printf("\b]");
printf("\n");
}
