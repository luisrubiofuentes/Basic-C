#include <stdio.h>

int main()
{

    int base;

    printf("\nIntroduce la base del triángulo a calcular: ");
    scanf("%d", &base);

    for (int i=0; i<base; i++)
    {
   printf ("*");

   for (int j=1; j<i;j++){
            printf("*");
            printf("\n");
   }



    }


}
