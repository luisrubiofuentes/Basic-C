#include <stdio.h>

int main(){

int num1,num2,num3;

printf("\nNumero 1: ");
scanf("%d",&num1);

printf("\nNumero 2: ");
scanf("%d",&num2);
printf("\nNumero 3: ");
scanf("%d",&num3);

if (num1*num1 == num2*num2*+num3*num3 || num2*num2==num1*num1 +num3*num3 || num3*num3==num1*num1 + num2*num2){
    printf("\nSe cumple");
}
else {
    printf("\nNo se cumple");
}
}
