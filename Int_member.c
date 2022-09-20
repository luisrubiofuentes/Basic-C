#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int member(int elem, int arr[], int lon);
void leerVector(int m[], int lon);
void escribirVector(int h[], int len);

int main(){
    srand(time(NULL));
    int v[5]= {};
    int res=0,element=0;

    leerVector(v,5);
    escribirVector(v,5);

    printf("\nQue elemento desea buscar en el array? ");
    scanf("%d",&element);


    res=member(element, v,5);
    printf("\n%d",res);

}
int member(int elem, int arr[], int lon){

   int result=0;
   if(lon==0){ /*Es cierto que solo debe haber un resturn,pero aquí se dejan 2 por ser tratamiento de errores*/
    return 0;
   }

for(int i=0;i<lon && !result;i++){
/*Importante para que sea más optimo el && del for*/
    if(arr[i]==elem)
        result=1;
}
return result;

}
void leerVector(int m[], int lon)
{

    for (int i=0; i<lon; i++)
    {
        m[i]=rand()%51;
    }
}
void escribirVector(int h[], int len)
{
    printf("[");
    for (int i=0; i<len-1; i++)
    {
        printf("%d ",h[i]);
    }
    printf("%d]",h[len-1]);
    printf("\n");
}
