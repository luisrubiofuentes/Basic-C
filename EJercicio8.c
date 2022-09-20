#include <stdio.h>
#include <math.h>



int main()
{

    int segundos=0, minutos=0;

    printf("\nIntroduzca el tiempo en segundos: ");
    scanf("%d", &segundos);


    while (segundos>=60)
    {
        minutos=minutos+1;
        segundos=segundos-60;
    }

    printf("\nEl tiempo son %d minutos y %d segundos\n", minutos,segundos);


}
