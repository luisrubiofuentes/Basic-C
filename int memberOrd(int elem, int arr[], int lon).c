#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int memberOrd(int elem, int arr[], int lon);

int main(){
/*LO TENÏA MALLLLLL*/

    int v[]={1,12,20,22,40,41,42};

    if(memberOrd(42,v,7))
        printf("\nEncontrado\n");

    else
        printf("\nNoencontrado\n");

    if(memberOrd(12,v,7))
        printf("\nEncontrado\n");

    else
        printf("\nNoencontrado\n");

    if(memberOrd(410,v,7))
        printf("\nEncontrado\n");

    else
        printf("\nNoencontrado\n");



}
int memberOrd(int elem, int arr[], int lon){

    if(lon==0 || elem<arr[0] || elem>arr[lon-1]){
        return 0;
    }
    int start=0;
    int end=lon-1;
    int m;
    while(start<=end && arr[(m=(start+end)/2)]!=elem){
        if(elem<arr[m])
            end=m-1;

        else
            start=m+1;

    }

    return start<=end;
}
