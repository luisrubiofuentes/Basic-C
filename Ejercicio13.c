#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
/*No supe el 4 y el 5*/
struct player
{
    char  nombres[80];
    int edades;
    double altura;

};

void flush();

int main()
{
    char nombres[80],buscado[80];
    int edades;
    double altura;

    struct player p[10];

    int option=0,mayoralt,posalt;


    for(int i=0; i<10; i++)
    {
        printf("\n Introduce el nombre del jugador %d: ",i+1);
        scanf("%s",p[i].nombres);

        flush();

        printf("\n Introduce la edad del jugador %d: ",i+1);
        scanf("%d",&p[i].edades);
        printf("\n Introduce la altura del jugador %d: ",i+1);
        scanf("%lf",&p[i].altura);
    }
    do
    {
        printf("\nMenu 1-lista de los nombres de los jugadores.\n   2-Lista de las alturas de los jugadores.\n      3-Lista de las edades de jugadores.\n       4-Buscar nombre de jugador.\n       5-Indicar la edad del mas alto.\n ");
        scanf("%d",&option);

        if(option==1)
        {
            printf("/n /t LOS NOMBRES DE LOS JUGADORES SON: ");

            for(int i=0; i<10; i++)
            {
                printf("\n %s",p[i].nombres);
            }
        }
        if(option==2)
        {
            printf("/n /t LAS ALTURAS DE LOS JUGADORES SON: ");

            for(int i=0; i<10; i++)
            {
                printf("\n %lf",p[i].altura);
            }
        }
        if(option==3)
        {
            printf("\n /t LAS EDADES DE LOS JUGADORES SON: ");

            for(int i=0; i<10; i++)
            {
                printf("\n %d",p[i].edades);
            }
        }
        if(option==4)
        {
            printf("\n A que jugador desea buscar");
            scanf("%s",buscado);
            flush();
            for(int i=0; i<10; i++)
            {

                if(strcmp(buscado,p[i].nombres)==0)
                {
                    printf("\n Su edad es: %d",p[i].edades);
                    printf("\n Su altura es: %lf",p[i].altura);
                }
            }
        }
        if(option==5)
        {
            mayoralt=p[0].altura;
            for(int i=1; i<10; i++)
            {
                if(mayoralt<p[i].altura)
                {
                    mayoralt=p[i].altura;
                    posalt=i;
                }
            }
            printf("\nLa altura mas alta es %lf de %s con %d agnos",p[posalt].altura,p[posalt].nombres,p[posalt].edades);
        }


    }
    while(option>0 && option<6);
}
void flush()
{
    while(getchar()!='\n')
        ;

}


